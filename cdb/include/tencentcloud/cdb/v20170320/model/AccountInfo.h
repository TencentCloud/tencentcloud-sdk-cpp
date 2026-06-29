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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 账号详细信息
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账号备注信息</p>
                     * @return Notes <p>账号备注信息</p>
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置<p>账号备注信息</p>
                     * @param _notes <p>账号备注信息</p>
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取<p>账号的域名</p>
                     * @return Host <p>账号的域名</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>账号的域名</p>
                     * @param _host <p>账号的域名</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>账号的名称</p>
                     * @return User <p>账号的名称</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>账号的名称</p>
                     * @param _user <p>账号的名称</p>
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>账号信息修改时间</p>
                     * @return ModifyTime <p>账号信息修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>账号信息修改时间</p>
                     * @param _modifyTime <p>账号信息修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改密码的时间</p>
                     * @return ModifyPasswordTime <p>修改密码的时间</p>
                     * 
                     */
                    std::string GetModifyPasswordTime() const;

                    /**
                     * 设置<p>修改密码的时间</p>
                     * @param _modifyPasswordTime <p>修改密码的时间</p>
                     * 
                     */
                    void SetModifyPasswordTime(const std::string& _modifyPasswordTime);

                    /**
                     * 判断参数 ModifyPasswordTime 是否已赋值
                     * @return ModifyPasswordTime 是否已赋值
                     * 
                     */
                    bool ModifyPasswordTimeHasBeenSet() const;

                    /**
                     * 获取<p>该值已废弃</p>
                     * @return CreateTime <p>该值已废弃</p>
                     * @deprecated
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>该值已废弃</p>
                     * @param _createTime <p>该值已废弃</p>
                     * @deprecated
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * @deprecated
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户最大可用实例连接数</p>
                     * @return MaxUserConnections <p>用户最大可用实例连接数</p>
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置<p>用户最大可用实例连接数</p>
                     * @param _maxUserConnections <p>用户最大可用实例连接数</p>
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                    /**
                     * 获取<p>用户账号是否开启了密码轮转</p>
                     * @return OpenCam <p>用户账号是否开启了密码轮转</p>
                     * 
                     */
                    bool GetOpenCam() const;

                    /**
                     * 设置<p>用户账号是否开启了密码轮转</p>
                     * @param _openCam <p>用户账号是否开启了密码轮转</p>
                     * 
                     */
                    void SetOpenCam(const bool& _openCam);

                    /**
                     * 判断参数 OpenCam 是否已赋值
                     * @return OpenCam 是否已赋值
                     * 
                     */
                    bool OpenCamHasBeenSet() const;

                private:

                    /**
                     * <p>账号备注信息</p>
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * <p>账号的域名</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>账号的名称</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>账号信息修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>修改密码的时间</p>
                     */
                    std::string m_modifyPasswordTime;
                    bool m_modifyPasswordTimeHasBeenSet;

                    /**
                     * <p>该值已废弃</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>用户最大可用实例连接数</p>
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                    /**
                     * <p>用户账号是否开启了密码轮转</p>
                     */
                    bool m_openCam;
                    bool m_openCamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_
