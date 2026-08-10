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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulFixItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateVulFixTask请求参数结构体
                */
                class CreateVulFixTaskRequest : public AbstractModel
                {
                public:
                    CreateVulFixTaskRequest();
                    ~CreateVulFixTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>修复项列表，每项指定一个漏洞/KB补丁及其需要修复的主机<br>入参限制：最多100项，总实例数不超过5000</p>
                     * @return FixItems <p>修复项列表，每项指定一个漏洞/KB补丁及其需要修复的主机<br>入参限制：最多100项，总实例数不超过5000</p>
                     * 
                     */
                    std::vector<VulFixItem> GetFixItems() const;

                    /**
                     * 设置<p>修复项列表，每项指定一个漏洞/KB补丁及其需要修复的主机<br>入参限制：最多100项，总实例数不超过5000</p>
                     * @param _fixItems <p>修复项列表，每项指定一个漏洞/KB补丁及其需要修复的主机<br>入参限制：最多100项，总实例数不超过5000</p>
                     * 
                     */
                    void SetFixItems(const std::vector<VulFixItem>& _fixItems);

                    /**
                     * 判断参数 FixItems 是否已赋值
                     * @return FixItems 是否已赋值
                     * 
                     */
                    bool FixItemsHasBeenSet() const;

                    /**
                     * 获取<p>最大修复时间<br>单位：秒<br>默认值：3600</p>
                     * @return Timeout <p>最大修复时间<br>单位：秒<br>默认值：3600</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>最大修复时间<br>单位：秒<br>默认值：3600</p>
                     * @param _timeout <p>最大修复时间<br>单位：秒<br>默认值：3600</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否在修复前创建磁盘快照<br>默认值：false</p>
                     * @return CreateSnapshot <p>是否在修复前创建磁盘快照<br>默认值：false</p>
                     * 
                     */
                    bool GetCreateSnapshot() const;

                    /**
                     * 设置<p>是否在修复前创建磁盘快照<br>默认值：false</p>
                     * @param _createSnapshot <p>是否在修复前创建磁盘快照<br>默认值：false</p>
                     * 
                     */
                    void SetCreateSnapshot(const bool& _createSnapshot);

                    /**
                     * 判断参数 CreateSnapshot 是否已赋值
                     * @return CreateSnapshot 是否已赋值
                     * 
                     */
                    bool CreateSnapshotHasBeenSet() const;

                    /**
                     * 获取<p>快照名称，CreateSnapshot为true时有效<br>入参限制：最长128个字符</p>
                     * @return SnapshotName <p>快照名称，CreateSnapshot为true时有效<br>入参限制：最长128个字符</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>快照名称，CreateSnapshot为true时有效<br>入参限制：最长128个字符</p>
                     * @param _snapshotName <p>快照名称，CreateSnapshot为true时有效<br>入参限制：最长128个字符</p>
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取<p>快照保存天数，CreateSnapshot为true时有效</p>
                     * @return SaveDays <p>快照保存天数，CreateSnapshot为true时有效</p>
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 设置<p>快照保存天数，CreateSnapshot为true时有效</p>
                     * @param _saveDays <p>快照保存天数，CreateSnapshot为true时有效</p>
                     * 
                     */
                    void SetSaveDays(const int64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>修复项列表，每项指定一个漏洞/KB补丁及其需要修复的主机<br>入参限制：最多100项，总实例数不超过5000</p>
                     */
                    std::vector<VulFixItem> m_fixItems;
                    bool m_fixItemsHasBeenSet;

                    /**
                     * <p>最大修复时间<br>单位：秒<br>默认值：3600</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>是否在修复前创建磁盘快照<br>默认值：false</p>
                     */
                    bool m_createSnapshot;
                    bool m_createSnapshotHasBeenSet;

                    /**
                     * <p>快照名称，CreateSnapshot为true时有效<br>入参限制：最长128个字符</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>快照保存天数，CreateSnapshot为true时有效</p>
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXTASKREQUEST_H_
