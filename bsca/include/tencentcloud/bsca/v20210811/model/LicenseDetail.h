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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSEDETAIL_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/LicenseRestriction.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 描述许可证的详细信息。
                */
                class LicenseDetail : public AbstractModel
                {
                public:
                    LicenseDetail();
                    ~LicenseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取许可证内容
                     * @return Content 许可证内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置许可证内容
                     * @param _content 许可证内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取许可证允许信息列表
                     * @return ConditionSet 许可证允许信息列表
                     * 
                     */
                    std::vector<LicenseRestriction> GetConditionSet() const;

                    /**
                     * 设置许可证允许信息列表
                     * @param _conditionSet 许可证允许信息列表
                     * 
                     */
                    void SetConditionSet(const std::vector<LicenseRestriction>& _conditionSet);

                    /**
                     * 判断参数 ConditionSet 是否已赋值
                     * @return ConditionSet 是否已赋值
                     * 
                     */
                    bool ConditionSetHasBeenSet() const;

                    /**
                     * 获取许可证要求信息列表
                     * @return ForbiddenSet 许可证要求信息列表
                     * 
                     */
                    std::vector<LicenseRestriction> GetForbiddenSet() const;

                    /**
                     * 设置许可证要求信息列表
                     * @param _forbiddenSet 许可证要求信息列表
                     * 
                     */
                    void SetForbiddenSet(const std::vector<LicenseRestriction>& _forbiddenSet);

                    /**
                     * 判断参数 ForbiddenSet 是否已赋值
                     * @return ForbiddenSet 是否已赋值
                     * 
                     */
                    bool ForbiddenSetHasBeenSet() const;

                    /**
                     * 获取许可证禁止信息列表
                     * @return PermissionSet 许可证禁止信息列表
                     * 
                     */
                    std::vector<LicenseRestriction> GetPermissionSet() const;

                    /**
                     * 设置许可证禁止信息列表
                     * @param _permissionSet 许可证禁止信息列表
                     * 
                     */
                    void SetPermissionSet(const std::vector<LicenseRestriction>& _permissionSet);

                    /**
                     * 判断参数 PermissionSet 是否已赋值
                     * @return PermissionSet 是否已赋值
                     * 
                     */
                    bool PermissionSetHasBeenSet() const;

                private:

                    /**
                     * 许可证内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 许可证允许信息列表
                     */
                    std::vector<LicenseRestriction> m_conditionSet;
                    bool m_conditionSetHasBeenSet;

                    /**
                     * 许可证要求信息列表
                     */
                    std::vector<LicenseRestriction> m_forbiddenSet;
                    bool m_forbiddenSetHasBeenSet;

                    /**
                     * 许可证禁止信息列表
                     */
                    std::vector<LicenseRestriction> m_permissionSet;
                    bool m_permissionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSEDETAIL_H_
