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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunction请求参数结构体
                */
                class ModifyFunctionRequest : public AbstractModel
                {
                public:
                    ModifyFunctionRequest();
                    ~ModifyFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取函数 ID。
                     * @return FunctionId 函数 ID。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID。
                     * @param _functionId 函数 ID。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取函数描述，最大支持 60 个字符，不填写保持原有配置。
                     * @return Remark 函数描述，最大支持 60 个字符，不填写保持原有配置。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置函数描述，最大支持 60 个字符，不填写保持原有配置。
                     * @param _remark 函数描述，最大支持 60 个字符，不填写保持原有配置。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取函数内容，当前仅支持 JavaScript 代码，最大支持 5MB 大小，不填写保持原有配置。
                     * @return Content 函数内容，当前仅支持 JavaScript 代码，最大支持 5MB 大小，不填写保持原有配置。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置函数内容，当前仅支持 JavaScript 代码，最大支持 5MB 大小，不填写保持原有配置。
                     * @param _content 函数内容，当前仅支持 JavaScript 代码，最大支持 5MB 大小，不填写保持原有配置。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 函数 ID。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 函数描述，最大支持 60 个字符，不填写保持原有配置。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 函数内容，当前仅支持 JavaScript 代码，最大支持 5MB 大小，不填写保持原有配置。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREQUEST_H_
