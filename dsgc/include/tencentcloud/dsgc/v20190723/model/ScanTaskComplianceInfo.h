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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKCOMPLIANCEINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKCOMPLIANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 扫描任务选择的合规组信息
                */
                class ScanTaskComplianceInfo : public AbstractModel
                {
                public:
                    ScanTaskComplianceInfo();
                    ~ScanTaskComplianceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规组ID
                     * @return ComplianceGroupId 合规组ID
                     * 
                     */
                    int64_t GetComplianceGroupId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceGroupId 合规组ID
                     * 
                     */
                    void SetComplianceGroupId(const int64_t& _complianceGroupId);

                    /**
                     * 判断参数 ComplianceGroupId 是否已赋值
                     * @return ComplianceGroupId 是否已赋值
                     * 
                     */
                    bool ComplianceGroupIdHasBeenSet() const;

                    /**
                     * 获取合规组名称
                     * @return ComplianceGroupName 合规组名称
                     * 
                     */
                    std::string GetComplianceGroupName() const;

                    /**
                     * 设置合规组名称
                     * @param _complianceGroupName 合规组名称
                     * 
                     */
                    void SetComplianceGroupName(const std::string& _complianceGroupName);

                    /**
                     * 判断参数 ComplianceGroupName 是否已赋值
                     * @return ComplianceGroupName 是否已赋值
                     * 
                     */
                    bool ComplianceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceGroupId;
                    bool m_complianceGroupIdHasBeenSet;

                    /**
                     * 合规组名称
                     */
                    std::string m_complianceGroupName;
                    bool m_complianceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKCOMPLIANCEINFO_H_
