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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTMEMINFO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTMEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * AGM 记忆服务开通信息
                */
                class AgentMemInfo : public AbstractModel
                {
                public:
                    AgentMemInfo();
                    ~AgentMemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Memory实例ID</p>
                     * @return MemInstanceId <p>Memory实例ID</p>
                     * 
                     */
                    std::string GetMemInstanceId() const;

                    /**
                     * 设置<p>Memory实例ID</p>
                     * @param _memInstanceId <p>Memory实例ID</p>
                     * 
                     */
                    void SetMemInstanceId(const std::string& _memInstanceId);

                    /**
                     * 判断参数 MemInstanceId 是否已赋值
                     * @return MemInstanceId 是否已赋值
                     * 
                     */
                    bool MemInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>1=active, 0=disabled（软删/关闭/下线历史行）</p>
                     * @return Status <p>1=active, 0=disabled（软删/关闭/下线历史行）</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>1=active, 0=disabled（软删/关闭/下线历史行）</p>
                     * @param _status <p>1=active, 0=disabled（软删/关闭/下线历史行）</p>
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
                     * 获取<p>0=待安装,1=成功,2=失败待重试,3=开启中,4=关闭中/已关闭</p>
                     * @return InstallStatus <p>0=待安装,1=成功,2=失败待重试,3=开启中,4=关闭中/已关闭</p>
                     * 
                     */
                    int64_t GetInstallStatus() const;

                    /**
                     * 设置<p>0=待安装,1=成功,2=失败待重试,3=开启中,4=关闭中/已关闭</p>
                     * @param _installStatus <p>0=待安装,1=成功,2=失败待重试,3=开启中,4=关闭中/已关闭</p>
                     * 
                     */
                    void SetInstallStatus(const int64_t& _installStatus);

                    /**
                     * 判断参数 InstallStatus 是否已赋值
                     * @return InstallStatus 是否已赋值
                     * 
                     */
                    bool InstallStatusHasBeenSet() const;

                    /**
                     * 获取<p>creating/online/isolated/error/</p>
                     * @return MemStatus <p>creating/online/isolated/error/</p>
                     * 
                     */
                    std::string GetMemStatus() const;

                    /**
                     * 设置<p>creating/online/isolated/error/</p>
                     * @param _memStatus <p>creating/online/isolated/error/</p>
                     * 
                     */
                    void SetMemStatus(const std::string& _memStatus);

                    /**
                     * 判断参数 MemStatus 是否已赋值
                     * @return MemStatus 是否已赋值
                     * 
                     */
                    bool MemStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Memory实例ID</p>
                     */
                    std::string m_memInstanceId;
                    bool m_memInstanceIdHasBeenSet;

                    /**
                     * <p>1=active, 0=disabled（软删/关闭/下线历史行）</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>0=待安装,1=成功,2=失败待重试,3=开启中,4=关闭中/已关闭</p>
                     */
                    int64_t m_installStatus;
                    bool m_installStatusHasBeenSet;

                    /**
                     * <p>creating/online/isolated/error/</p>
                     */
                    std::string m_memStatus;
                    bool m_memStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_AGENTMEMINFO_H_
