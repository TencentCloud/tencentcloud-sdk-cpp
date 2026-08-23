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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIALLOCATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIALLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AIAgent 资产凭证位置
                */
                class AIAgentCredentialLocation : public AbstractModel
                {
                public:
                    AIAgentCredentialLocation();
                    ~AIAgentCredentialLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceID <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceID <p>实例 ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>容器 ID</p>
                     * @return ContainerID <p>容器 ID</p>
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置<p>容器 ID</p>
                     * @param _containerID <p>容器 ID</p>
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取<p>凭据所在路径</p>
                     * @return Path <p>凭据所在路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>凭据所在路径</p>
                     * @param _path <p>凭据所在路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>凭据所在行号</p>
                     * @return Line <p>凭据所在行号</p>
                     * 
                     */
                    int64_t GetLine() const;

                    /**
                     * 设置<p>凭据所在行号</p>
                     * @param _line <p>凭据所在行号</p>
                     * 
                     */
                    void SetLine(const int64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取<p>凭据脱敏片段</p>
                     * @return Content <p>凭据脱敏片段</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>凭据脱敏片段</p>
                     * @param _content <p>凭据脱敏片段</p>
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
                     * 获取<p>凭据是否托管</p><p>枚举值：</p><ul><li>1： 托管</li><li>0： 未托管</li></ul>
                     * @return Status <p>凭据是否托管</p><p>枚举值：</p><ul><li>1： 托管</li><li>0： 未托管</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>凭据是否托管</p><p>枚举值：</p><ul><li>1： 托管</li><li>0： 未托管</li></ul>
                     * @param _status <p>凭据是否托管</p><p>枚举值：</p><ul><li>1： 托管</li><li>0： 未托管</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>凭据托管 ID</p>
                     * @return DelegateID <p>凭据托管 ID</p>
                     * 
                     */
                    int64_t GetDelegateID() const;

                    /**
                     * 设置<p>凭据托管 ID</p>
                     * @param _delegateID <p>凭据托管 ID</p>
                     * 
                     */
                    void SetDelegateID(const int64_t& _delegateID);

                    /**
                     * 判断参数 DelegateID 是否已赋值
                     * @return DelegateID 是否已赋值
                     * 
                     */
                    bool DelegateIDHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>容器 ID</p>
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * <p>凭据所在路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>凭据所在行号</p>
                     */
                    int64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * <p>凭据脱敏片段</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>凭据是否托管</p><p>枚举值：</p><ul><li>1： 托管</li><li>0： 未托管</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>凭据托管 ID</p>
                     */
                    int64_t m_delegateID;
                    bool m_delegateIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIALLOCATION_H_
