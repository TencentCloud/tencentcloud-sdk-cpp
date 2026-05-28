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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONCONFLICT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONCONFLICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * migration 执行计划冲突项
                */
                class MigrationConflict : public AbstractModel
                {
                public:
                    MigrationConflict();
                    ~MigrationConflict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @return Version <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @param _version <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * @return Name <p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * @param _name <p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
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
                     * 获取<p>数据库已应用migration的版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * @return RemoteName <p>数据库已应用migration的版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * 
                     */
                    std::string GetRemoteName() const;

                    /**
                     * 设置<p>数据库已应用migration的版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * @param _remoteName <p>数据库已应用migration的版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * 
                     */
                    void SetRemoteName(const std::string& _remoteName);

                    /**
                     * 判断参数 RemoteName 是否已赋值
                     * @return RemoteName 是否已赋值
                     * 
                     */
                    bool RemoteNameHasBeenSet() const;

                    /**
                     * 获取<p>本次sql计算出来的checksum</p>
                     * @return LocalChecksum <p>本次sql计算出来的checksum</p>
                     * 
                     */
                    std::string GetLocalChecksum() const;

                    /**
                     * 设置<p>本次sql计算出来的checksum</p>
                     * @param _localChecksum <p>本次sql计算出来的checksum</p>
                     * 
                     */
                    void SetLocalChecksum(const std::string& _localChecksum);

                    /**
                     * 判断参数 LocalChecksum 是否已赋值
                     * @return LocalChecksum 是否已赋值
                     * 
                     */
                    bool LocalChecksumHasBeenSet() const;

                    /**
                     * 获取<p>已应用的migration，数据库存储的checksum</p>
                     * @return RemoteChecksum <p>已应用的migration，数据库存储的checksum</p>
                     * 
                     */
                    std::string GetRemoteChecksum() const;

                    /**
                     * 设置<p>已应用的migration，数据库存储的checksum</p>
                     * @param _remoteChecksum <p>已应用的migration，数据库存储的checksum</p>
                     * 
                     */
                    void SetRemoteChecksum(const std::string& _remoteChecksum);

                    /**
                     * 判断参数 RemoteChecksum 是否已赋值
                     * @return RemoteChecksum 是否已赋值
                     * 
                     */
                    bool RemoteChecksumHasBeenSet() const;

                    /**
                     * 获取<p>归入该分组的原因</p>
                     * @return Reason <p>归入该分组的原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>归入该分组的原因</p>
                     * @param _reason <p>归入该分组的原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>冲突信息</p>
                     * @return Message <p>冲突信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>冲突信息</p>
                     * @param _message <p>冲突信息</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据库已应用migration的版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     */
                    std::string m_remoteName;
                    bool m_remoteNameHasBeenSet;

                    /**
                     * <p>本次sql计算出来的checksum</p>
                     */
                    std::string m_localChecksum;
                    bool m_localChecksumHasBeenSet;

                    /**
                     * <p>已应用的migration，数据库存储的checksum</p>
                     */
                    std::string m_remoteChecksum;
                    bool m_remoteChecksumHasBeenSet;

                    /**
                     * <p>归入该分组的原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>冲突信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONCONFLICT_H_
