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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_COPYANDROIDINSTANCEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_COPYANDROIDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CopyAndroidInstance请求参数结构体
                */
                class CopyAndroidInstanceRequest : public AbstractModel
                {
                public:
                    CopyAndroidInstanceRequest();
                    ~CopyAndroidInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源安卓实例 ID
                     * @return SourceAndroidInstanceId 源安卓实例 ID
                     * 
                     */
                    std::string GetSourceAndroidInstanceId() const;

                    /**
                     * 设置源安卓实例 ID
                     * @param _sourceAndroidInstanceId 源安卓实例 ID
                     * 
                     */
                    void SetSourceAndroidInstanceId(const std::string& _sourceAndroidInstanceId);

                    /**
                     * 判断参数 SourceAndroidInstanceId 是否已赋值
                     * @return SourceAndroidInstanceId 是否已赋值
                     * 
                     */
                    bool SourceAndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取目的安卓实例 ID
                     * @return TargetAndroidInstanceId 目的安卓实例 ID
                     * 
                     */
                    std::string GetTargetAndroidInstanceId() const;

                    /**
                     * 设置目的安卓实例 ID
                     * @param _targetAndroidInstanceId 目的安卓实例 ID
                     * 
                     */
                    void SetTargetAndroidInstanceId(const std::string& _targetAndroidInstanceId);

                    /**
                     * 判断参数 TargetAndroidInstanceId 是否已赋值
                     * @return TargetAndroidInstanceId 是否已赋值
                     * 
                     */
                    bool TargetAndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @return Includes 包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    std::vector<std::string> GetIncludes() const;

                    /**
                     * 设置包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @param _includes 包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    void SetIncludes(const std::vector<std::string>& _includes);

                    /**
                     * 判断参数 Includes 是否已赋值
                     * @return Includes 是否已赋值
                     * 
                     */
                    bool IncludesHasBeenSet() const;

                    /**
                     * 获取需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @return Excludes 需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    std::vector<std::string> GetExcludes() const;

                    /**
                     * 设置需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @param _excludes 需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    void SetExcludes(const std::vector<std::string>& _excludes);

                    /**
                     * 判断参数 Excludes 是否已赋值
                     * @return Excludes 是否已赋值
                     * 
                     */
                    bool ExcludesHasBeenSet() const;

                private:

                    /**
                     * 源安卓实例 ID
                     */
                    std::string m_sourceAndroidInstanceId;
                    bool m_sourceAndroidInstanceIdHasBeenSet;

                    /**
                     * 目的安卓实例 ID
                     */
                    std::string m_targetAndroidInstanceId;
                    bool m_targetAndroidInstanceIdHasBeenSet;

                    /**
                     * 包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     */
                    std::vector<std::string> m_includes;
                    bool m_includesHasBeenSet;

                    /**
                     * 需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     */
                    std::vector<std::string> m_excludes;
                    bool m_excludesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_COPYANDROIDINSTANCEREQUEST_H_
