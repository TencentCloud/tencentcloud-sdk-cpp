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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_EDITVERSIONS_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_EDITVERSIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 编辑版本信息
                */
                class EditVersions : public AbstractModel
                {
                public:
                    EditVersions();
                    ~EditVersions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本号</p><p>取值范围：[0, 100]</p><p>默认值：0</p>
                     * @return Version <p>版本号</p><p>取值范围：[0, 100]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置<p>版本号</p><p>取值范围：[0, 100]</p><p>默认值：0</p>
                     * @param _version <p>版本号</p><p>取值范围：[0, 100]</p><p>默认值：0</p>
                     * 
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>版本状态</p><p>枚举值：</p><ul><li>READY： 已完成</li><li>FAILED： 失败</li><li>PROCESSING： 进行中</li></ul>
                     * @return Status <p>版本状态</p><p>枚举值：</p><ul><li>READY： 已完成</li><li>FAILED： 失败</li><li>PROCESSING： 进行中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>版本状态</p><p>枚举值：</p><ul><li>READY： 已完成</li><li>FAILED： 失败</li><li>PROCESSING： 进行中</li></ul>
                     * @param _status <p>版本状态</p><p>枚举值：</p><ul><li>READY： 已完成</li><li>FAILED： 失败</li><li>PROCESSING： 进行中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否是主版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return IsMain <p>是否是主版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetIsMain() const;

                    /**
                     * 设置<p>是否是主版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _isMain <p>是否是主版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetIsMain(const bool& _isMain);

                    /**
                     * 判断参数 IsMain 是否已赋值
                     * @return IsMain 是否已赋值
                     * 
                     */
                    bool IsMainHasBeenSet() const;

                    /**
                     * 获取<p>是否源头版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return IsSource <p>是否源头版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetIsSource() const;

                    /**
                     * 设置<p>是否源头版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _isSource <p>是否源头版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetIsSource(const bool& _isSource);

                    /**
                     * 判断参数 IsSource 是否已赋值
                     * @return IsSource 是否已赋值
                     * 
                     */
                    bool IsSourceHasBeenSet() const;

                    /**
                     * 获取<p>版本时长</p><p>取值范围：[0, 1000000]</p><p>单位：秒</p>
                     * @return KeepDurationSec <p>版本时长</p><p>取值范围：[0, 1000000]</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetKeepDurationSec() const;

                    /**
                     * 设置<p>版本时长</p><p>取值范围：[0, 1000000]</p><p>单位：秒</p>
                     * @param _keepDurationSec <p>版本时长</p><p>取值范围：[0, 1000000]</p><p>单位：秒</p>
                     * 
                     */
                    void SetKeepDurationSec(const uint64_t& _keepDurationSec);

                    /**
                     * 判断参数 KeepDurationSec 是否已赋值
                     * @return KeepDurationSec 是否已赋值
                     * 
                     */
                    bool KeepDurationSecHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>取值范围：[0, 10000000]</p>
                     * @return CreatedAtMs <p>创建时间</p><p>取值范围：[0, 10000000]</p>
                     * 
                     */
                    uint64_t GetCreatedAtMs() const;

                    /**
                     * 设置<p>创建时间</p><p>取值范围：[0, 10000000]</p>
                     * @param _createdAtMs <p>创建时间</p><p>取值范围：[0, 10000000]</p>
                     * 
                     */
                    void SetCreatedAtMs(const uint64_t& _createdAtMs);

                    /**
                     * 判断参数 CreatedAtMs 是否已赋值
                     * @return CreatedAtMs 是否已赋值
                     * 
                     */
                    bool CreatedAtMsHasBeenSet() const;

                    /**
                     * 获取<p>创建用户id</p>
                     * @return CreatorUserId <p>创建用户id</p>
                     * 
                     */
                    std::string GetCreatorUserId() const;

                    /**
                     * 设置<p>创建用户id</p>
                     * @param _creatorUserId <p>创建用户id</p>
                     * 
                     */
                    void SetCreatorUserId(const std::string& _creatorUserId);

                    /**
                     * 判断参数 CreatorUserId 是否已赋值
                     * @return CreatorUserId 是否已赋值
                     * 
                     */
                    bool CreatorUserIdHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p><p>默认值：空</p><p>仅失败才会有原因</p>
                     * @return FailReason <p>失败原因</p><p>默认值：空</p><p>仅失败才会有原因</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因</p><p>默认值：空</p><p>仅失败才会有原因</p>
                     * @param _failReason <p>失败原因</p><p>默认值：空</p><p>仅失败才会有原因</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>取值范围：[0, 100000]</p>
                     * @return UpdatedAtMs <p>更新时间</p><p>取值范围：[0, 100000]</p>
                     * 
                     */
                    uint64_t GetUpdatedAtMs() const;

                    /**
                     * 设置<p>更新时间</p><p>取值范围：[0, 100000]</p>
                     * @param _updatedAtMs <p>更新时间</p><p>取值范围：[0, 100000]</p>
                     * 
                     */
                    void SetUpdatedAtMs(const uint64_t& _updatedAtMs);

                    /**
                     * 判断参数 UpdatedAtMs 是否已赋值
                     * @return UpdatedAtMs 是否已赋值
                     * 
                     */
                    bool UpdatedAtMsHasBeenSet() const;

                    /**
                     * 获取<p>版本名字</p>
                     * @return VersionName <p>版本名字</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>版本名字</p>
                     * @param _versionName <p>版本名字</p>
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                private:

                    /**
                     * <p>版本号</p><p>取值范围：[0, 100]</p><p>默认值：0</p>
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>版本状态</p><p>枚举值：</p><ul><li>READY： 已完成</li><li>FAILED： 失败</li><li>PROCESSING： 进行中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否是主版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_isMain;
                    bool m_isMainHasBeenSet;

                    /**
                     * <p>是否源头版本</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_isSource;
                    bool m_isSourceHasBeenSet;

                    /**
                     * <p>版本时长</p><p>取值范围：[0, 1000000]</p><p>单位：秒</p>
                     */
                    uint64_t m_keepDurationSec;
                    bool m_keepDurationSecHasBeenSet;

                    /**
                     * <p>创建时间</p><p>取值范围：[0, 10000000]</p>
                     */
                    uint64_t m_createdAtMs;
                    bool m_createdAtMsHasBeenSet;

                    /**
                     * <p>创建用户id</p>
                     */
                    std::string m_creatorUserId;
                    bool m_creatorUserIdHasBeenSet;

                    /**
                     * <p>失败原因</p><p>默认值：空</p><p>仅失败才会有原因</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>更新时间</p><p>取值范围：[0, 100000]</p>
                     */
                    uint64_t m_updatedAtMs;
                    bool m_updatedAtMsHasBeenSet;

                    /**
                     * <p>版本名字</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EDITVERSIONS_H_
