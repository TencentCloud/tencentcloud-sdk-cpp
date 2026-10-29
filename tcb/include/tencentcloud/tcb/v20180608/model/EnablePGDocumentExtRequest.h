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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ENABLEPGDOCUMENTEXTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ENABLEPGDOCUMENTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * EnablePGDocumentExt请求参数结构体
                */
                class EnablePGDocumentExtRequest : public AbstractModel
                {
                public:
                    EnablePGDocumentExtRequest();
                    ~EnablePGDocumentExtRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境 id，租户级标识信息，开通环境时产生，全局唯一</p><p>参数格式：用户自定义小写英文命名 + 随机雪花字符</p>
                     * @return EnvId <p>环境 id，租户级标识信息，开通环境时产生，全局唯一</p><p>参数格式：用户自定义小写英文命名 + 随机雪花字符</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境 id，租户级标识信息，开通环境时产生，全局唯一</p><p>参数格式：用户自定义小写英文命名 + 随机雪花字符</p>
                     * @param _envId <p>环境 id，租户级标识信息，开通环境时产生，全局唯一</p><p>参数格式：用户自定义小写英文命名 + 随机雪花字符</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * <p>环境 id，租户级标识信息，开通环境时产生，全局唯一</p><p>参数格式：用户自定义小写英文命名 + 随机雪花字符</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENABLEPGDOCUMENTEXTREQUEST_H_
