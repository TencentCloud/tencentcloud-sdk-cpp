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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SOFTDEPENDINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SOFTDEPENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 体外客户端组件依赖信息
                */
                class SoftDependInfo : public AbstractModel
                {
                public:
                    SoftDependInfo();
                    ~SoftDependInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名称
                     * @return SoftName 组件名称
                     * 
                     */
                    std::string GetSoftName() const;

                    /**
                     * 设置组件名称
                     * @param _softName 组件名称
                     * 
                     */
                    void SetSoftName(const std::string& _softName);

                    /**
                     * 判断参数 SoftName 是否已赋值
                     * @return SoftName 是否已赋值
                     * 
                     */
                    bool SoftNameHasBeenSet() const;

                    /**
                     * 获取是否必选
                     * @return Required 是否必选
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置是否必选
                     * @param _required 是否必选
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                private:

                    /**
                     * 组件名称
                     */
                    std::string m_softName;
                    bool m_softNameHasBeenSet;

                    /**
                     * 是否必选
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SOFTDEPENDINFO_H_
