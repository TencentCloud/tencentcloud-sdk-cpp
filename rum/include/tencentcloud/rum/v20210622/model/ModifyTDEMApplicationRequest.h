/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyTDEMApplication请求参数结构体
                */
                class ModifyTDEMApplicationRequest : public AbstractModel
                {
                public:
                    ModifyTDEMApplicationRequest();
                    ~ModifyTDEMApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填）</p>
                     * @return AppId <p>应用 ID（必填）</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（必填）</p>
                     * @param _appId <p>应用 ID（必填）</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用名称（可选）</p>
                     * @return Name <p>应用名称（可选）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>应用名称（可选）</p>
                     * @param _name <p>应用名称（可选）</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>应用描述（可选）</p>
                     * @return Desc <p>应用描述（可选）</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>应用描述（可选）</p>
                     * @param _desc <p>应用描述（可选）</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取<p>是否排除已忽略错误</p>
                     * @return ExcludeIgnoredErrors <p>是否排除已忽略错误</p>
                     * 
                     */
                    bool GetExcludeIgnoredErrors() const;

                    /**
                     * 设置<p>是否排除已忽略错误</p>
                     * @param _excludeIgnoredErrors <p>是否排除已忽略错误</p>
                     * 
                     */
                    void SetExcludeIgnoredErrors(const bool& _excludeIgnoredErrors);

                    /**
                     * 判断参数 ExcludeIgnoredErrors 是否已赋值
                     * @return ExcludeIgnoredErrors 是否已赋值
                     * 
                     */
                    bool ExcludeIgnoredErrorsHasBeenSet() const;

                    /**
                     * 获取<p>APM 实例 ID 列表</p>
                     * @return ApmInstanceIds <p>APM 实例 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetApmInstanceIds() const;

                    /**
                     * 设置<p>APM 实例 ID 列表</p>
                     * @param _apmInstanceIds <p>APM 实例 ID 列表</p>
                     * 
                     */
                    void SetApmInstanceIds(const std::vector<std::string>& _apmInstanceIds);

                    /**
                     * 判断参数 ApmInstanceIds 是否已赋值
                     * @return ApmInstanceIds 是否已赋值
                     * 
                     */
                    bool ApmInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用名称（可选）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>应用描述（可选）</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>是否排除已忽略错误</p>
                     */
                    bool m_excludeIgnoredErrors;
                    bool m_excludeIgnoredErrorsHasBeenSet;

                    /**
                     * <p>APM 实例 ID 列表</p>
                     */
                    std::vector<std::string> m_apmInstanceIds;
                    bool m_apmInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMAPPLICATIONREQUEST_H_
