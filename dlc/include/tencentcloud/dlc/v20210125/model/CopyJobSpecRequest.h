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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COPYJOBSPECREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COPYJOBSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CopyJobSpec请求参数结构体
                */
                class CopyJobSpecRequest : public AbstractModel
                {
                public:
                    CopyJobSpecRequest();
                    ~CopyJobSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>原配置ID</p>
                     * @return SpecId <p>原配置ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>原配置ID</p>
                     * @param _specId <p>原配置ID</p>
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取<p>新配置名称（可选，留空则自动命名为 &#39;原名-copy&#39;）</p>
                     * @return NewName <p>新配置名称（可选，留空则自动命名为 &#39;原名-copy&#39;）</p>
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置<p>新配置名称（可选，留空则自动命名为 &#39;原名-copy&#39;）</p>
                     * @param _newName <p>新配置名称（可选，留空则自动命名为 &#39;原名-copy&#39;）</p>
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                private:

                    /**
                     * <p>原配置ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>新配置名称（可选，留空则自动命名为 &#39;原名-copy&#39;）</p>
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COPYJOBSPECREQUEST_H_
