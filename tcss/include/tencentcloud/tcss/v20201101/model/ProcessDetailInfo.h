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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行是安全详情，进程信息
                */
                class ProcessDetailInfo : public AbstractModel
                {
                public:
                    ProcessDetailInfo();
                    ~ProcessDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
                     * @param _processName 进程名称
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取进程权限
                     * @return ProcessAuthority 进程权限
                     * 
                     */
                    std::string GetProcessAuthority() const;

                    /**
                     * 设置进程权限
                     * @param _processAuthority 进程权限
                     * 
                     */
                    void SetProcessAuthority(const std::string& _processAuthority);

                    /**
                     * 判断参数 ProcessAuthority 是否已赋值
                     * @return ProcessAuthority 是否已赋值
                     * 
                     */
                    bool ProcessAuthorityHasBeenSet() const;

                    /**
                     * 获取进程pid
                     * @return ProcessId 进程pid
                     * 
                     */
                    uint64_t GetProcessId() const;

                    /**
                     * 设置进程pid
                     * @param _processId 进程pid
                     * 
                     */
                    void SetProcessId(const uint64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取进程启动用户
                     * @return ProcessStartUser 进程启动用户
                     * 
                     */
                    std::string GetProcessStartUser() const;

                    /**
                     * 设置进程启动用户
                     * @param _processStartUser 进程启动用户
                     * 
                     */
                    void SetProcessStartUser(const std::string& _processStartUser);

                    /**
                     * 判断参数 ProcessStartUser 是否已赋值
                     * @return ProcessStartUser 是否已赋值
                     * 
                     */
                    bool ProcessStartUserHasBeenSet() const;

                    /**
                     * 获取进程用户组
                     * @return ProcessUserGroup 进程用户组
                     * 
                     */
                    std::string GetProcessUserGroup() const;

                    /**
                     * 设置进程用户组
                     * @param _processUserGroup 进程用户组
                     * 
                     */
                    void SetProcessUserGroup(const std::string& _processUserGroup);

                    /**
                     * 判断参数 ProcessUserGroup 是否已赋值
                     * @return ProcessUserGroup 是否已赋值
                     * 
                     */
                    bool ProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return ProcessPath 进程路径
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程路径
                     * @param _processPath 进程路径
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程树
                     * @return ProcessTree 进程树
                     * 
                     */
                    std::string GetProcessTree() const;

                    /**
                     * 设置进程树
                     * @param _processTree 进程树
                     * 
                     */
                    void SetProcessTree(const std::string& _processTree);

                    /**
                     * 判断参数 ProcessTree 是否已赋值
                     * @return ProcessTree 是否已赋值
                     * 
                     */
                    bool ProcessTreeHasBeenSet() const;

                    /**
                     * 获取进程md5
                     * @return ProcessMd5 进程md5
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置进程md5
                     * @param _processMd5 进程md5
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取进程命令行参数
                     * @return ProcessParam 进程命令行参数
                     * 
                     */
                    std::string GetProcessParam() const;

                    /**
                     * 设置进程命令行参数
                     * @param _processParam 进程命令行参数
                     * 
                     */
                    void SetProcessParam(const std::string& _processParam);

                    /**
                     * 判断参数 ProcessParam 是否已赋值
                     * @return ProcessParam 是否已赋值
                     * 
                     */
                    bool ProcessParamHasBeenSet() const;

                private:

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程权限
                     */
                    std::string m_processAuthority;
                    bool m_processAuthorityHasBeenSet;

                    /**
                     * 进程pid
                     */
                    uint64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 进程启动用户
                     */
                    std::string m_processStartUser;
                    bool m_processStartUserHasBeenSet;

                    /**
                     * 进程用户组
                     */
                    std::string m_processUserGroup;
                    bool m_processUserGroupHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程树
                     */
                    std::string m_processTree;
                    bool m_processTreeHasBeenSet;

                    /**
                     * 进程md5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 进程命令行参数
                     */
                    std::string m_processParam;
                    bool m_processParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSDETAILINFO_H_
