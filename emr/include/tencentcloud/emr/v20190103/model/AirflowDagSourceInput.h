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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWDAGSOURCEINPUT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWDAGSOURCEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AirflowCfsSource.h>
#include <tencentcloud/emr/v20190103/model/AirflowGitSource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * airflow dag源目录来源
                */
                class AirflowDagSourceInput : public AbstractModel
                {
                public:
                    AirflowDagSourceInput();
                    ~AirflowDagSourceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否支持dag共享源</p>
                     * @return Enabled <p>是否支持dag共享源</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否支持dag共享源</p>
                     * @param _enabled <p>是否支持dag共享源</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>dag源类型</p><p>枚举值：</p><ul><li>CFS： CFS</li><li>GIT： Git</li></ul>
                     * @return Type <p>dag源类型</p><p>枚举值：</p><ul><li>CFS： CFS</li><li>GIT： Git</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>dag源类型</p><p>枚举值：</p><ul><li>CFS： CFS</li><li>GIT： Git</li></ul>
                     * @param _type <p>dag源类型</p><p>枚举值：</p><ul><li>CFS： CFS</li><li>GIT： Git</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>cfs实例DAG源配置</p>
                     * @return Cfs <p>cfs实例DAG源配置</p>
                     * 
                     */
                    AirflowCfsSource GetCfs() const;

                    /**
                     * 设置<p>cfs实例DAG源配置</p>
                     * @param _cfs <p>cfs实例DAG源配置</p>
                     * 
                     */
                    void SetCfs(const AirflowCfsSource& _cfs);

                    /**
                     * 判断参数 Cfs 是否已赋值
                     * @return Cfs 是否已赋值
                     * 
                     */
                    bool CfsHasBeenSet() const;

                    /**
                     * 获取<p>Git型DAG源配置</p>
                     * @return Git <p>Git型DAG源配置</p>
                     * 
                     */
                    AirflowGitSource GetGit() const;

                    /**
                     * 设置<p>Git型DAG源配置</p>
                     * @param _git <p>Git型DAG源配置</p>
                     * 
                     */
                    void SetGit(const AirflowGitSource& _git);

                    /**
                     * 判断参数 Git 是否已赋值
                     * @return Git 是否已赋值
                     * 
                     */
                    bool GitHasBeenSet() const;

                private:

                    /**
                     * <p>是否支持dag共享源</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>dag源类型</p><p>枚举值：</p><ul><li>CFS： CFS</li><li>GIT： Git</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>cfs实例DAG源配置</p>
                     */
                    AirflowCfsSource m_cfs;
                    bool m_cfsHasBeenSet;

                    /**
                     * <p>Git型DAG源配置</p>
                     */
                    AirflowGitSource m_git;
                    bool m_gitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWDAGSOURCEINPUT_H_
