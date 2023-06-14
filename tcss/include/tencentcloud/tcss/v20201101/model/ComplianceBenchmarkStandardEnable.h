/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARDENABLE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARDENABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示是否启用合规标准。
                */
                class ComplianceBenchmarkStandardEnable : public AbstractModel
                {
                public:
                    ComplianceBenchmarkStandardEnable();
                    ~ComplianceBenchmarkStandardEnable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规标准的ID。
                     * @return StandardId 合规标准的ID。
                     * 
                     */
                    uint64_t GetStandardId() const;

                    /**
                     * 设置合规标准的ID。
                     * @param _standardId 合规标准的ID。
                     * 
                     */
                    void SetStandardId(const uint64_t& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     * 
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取是否启用合规标准
                     * @return Enable 是否启用合规标准
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用合规标准
                     * @param _enable 是否启用合规标准
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 合规标准的ID。
                     */
                    uint64_t m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * 是否启用合规标准
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARDENABLE_H_
