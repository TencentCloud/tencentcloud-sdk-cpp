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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCOUNTINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 列表页分页统计信息
                */
                class DomainCountInfo : public AbstractModel
                {
                public:
                    DomainCountInfo();
                    ~DomainCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合条件的域名数量
                     * @return DomainTotal 符合条件的域名数量
                     * 
                     */
                    uint64_t GetDomainTotal() const;

                    /**
                     * 设置符合条件的域名数量
                     * @param _domainTotal 符合条件的域名数量
                     * 
                     */
                    void SetDomainTotal(const uint64_t& _domainTotal);

                    /**
                     * 判断参数 DomainTotal 是否已赋值
                     * @return DomainTotal 是否已赋值
                     * 
                     */
                    bool DomainTotalHasBeenSet() const;

                    /**
                     * 获取用户可以查看的所有域名数量
                     * @return AllTotal 用户可以查看的所有域名数量
                     * 
                     */
                    uint64_t GetAllTotal() const;

                    /**
                     * 设置用户可以查看的所有域名数量
                     * @param _allTotal 用户可以查看的所有域名数量
                     * 
                     */
                    void SetAllTotal(const uint64_t& _allTotal);

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     * 
                     */
                    bool AllTotalHasBeenSet() const;

                    /**
                     * 获取用户账号添加的域名数量
                     * @return MineTotal 用户账号添加的域名数量
                     * 
                     */
                    uint64_t GetMineTotal() const;

                    /**
                     * 设置用户账号添加的域名数量
                     * @param _mineTotal 用户账号添加的域名数量
                     * 
                     */
                    void SetMineTotal(const uint64_t& _mineTotal);

                    /**
                     * 判断参数 MineTotal 是否已赋值
                     * @return MineTotal 是否已赋值
                     * 
                     */
                    bool MineTotalHasBeenSet() const;

                    /**
                     * 获取共享给用户的域名数量
                     * @return ShareTotal 共享给用户的域名数量
                     * 
                     */
                    uint64_t GetShareTotal() const;

                    /**
                     * 设置共享给用户的域名数量
                     * @param _shareTotal 共享给用户的域名数量
                     * 
                     */
                    void SetShareTotal(const uint64_t& _shareTotal);

                    /**
                     * 判断参数 ShareTotal 是否已赋值
                     * @return ShareTotal 是否已赋值
                     * 
                     */
                    bool ShareTotalHasBeenSet() const;

                    /**
                     * 获取付费域名数量
                     * @return VipTotal 付费域名数量
                     * 
                     */
                    uint64_t GetVipTotal() const;

                    /**
                     * 设置付费域名数量
                     * @param _vipTotal 付费域名数量
                     * 
                     */
                    void SetVipTotal(const uint64_t& _vipTotal);

                    /**
                     * 判断参数 VipTotal 是否已赋值
                     * @return VipTotal 是否已赋值
                     * 
                     */
                    bool VipTotalHasBeenSet() const;

                    /**
                     * 获取暂停的域名数量
                     * @return PauseTotal 暂停的域名数量
                     * 
                     */
                    uint64_t GetPauseTotal() const;

                    /**
                     * 设置暂停的域名数量
                     * @param _pauseTotal 暂停的域名数量
                     * 
                     */
                    void SetPauseTotal(const uint64_t& _pauseTotal);

                    /**
                     * 判断参数 PauseTotal 是否已赋值
                     * @return PauseTotal 是否已赋值
                     * 
                     */
                    bool PauseTotalHasBeenSet() const;

                    /**
                     * 获取dns设置错误的域名数量
                     * @return ErrorTotal dns设置错误的域名数量
                     * 
                     */
                    uint64_t GetErrorTotal() const;

                    /**
                     * 设置dns设置错误的域名数量
                     * @param _errorTotal dns设置错误的域名数量
                     * 
                     */
                    void SetErrorTotal(const uint64_t& _errorTotal);

                    /**
                     * 判断参数 ErrorTotal 是否已赋值
                     * @return ErrorTotal 是否已赋值
                     * 
                     */
                    bool ErrorTotalHasBeenSet() const;

                    /**
                     * 获取锁定的域名数量
                     * @return LockTotal 锁定的域名数量
                     * 
                     */
                    uint64_t GetLockTotal() const;

                    /**
                     * 设置锁定的域名数量
                     * @param _lockTotal 锁定的域名数量
                     * 
                     */
                    void SetLockTotal(const uint64_t& _lockTotal);

                    /**
                     * 判断参数 LockTotal 是否已赋值
                     * @return LockTotal 是否已赋值
                     * 
                     */
                    bool LockTotalHasBeenSet() const;

                    /**
                     * 获取封禁的域名数量
                     * @return SpamTotal 封禁的域名数量
                     * 
                     */
                    uint64_t GetSpamTotal() const;

                    /**
                     * 设置封禁的域名数量
                     * @param _spamTotal 封禁的域名数量
                     * 
                     */
                    void SetSpamTotal(const uint64_t& _spamTotal);

                    /**
                     * 判断参数 SpamTotal 是否已赋值
                     * @return SpamTotal 是否已赋值
                     * 
                     */
                    bool SpamTotalHasBeenSet() const;

                    /**
                     * 获取30天内即将到期的域名数量
                     * @return VipExpire 30天内即将到期的域名数量
                     * 
                     */
                    uint64_t GetVipExpire() const;

                    /**
                     * 设置30天内即将到期的域名数量
                     * @param _vipExpire 30天内即将到期的域名数量
                     * 
                     */
                    void SetVipExpire(const uint64_t& _vipExpire);

                    /**
                     * 判断参数 VipExpire 是否已赋值
                     * @return VipExpire 是否已赋值
                     * 
                     */
                    bool VipExpireHasBeenSet() const;

                    /**
                     * 获取分享给其它人的域名数量
                     * @return ShareOutTotal 分享给其它人的域名数量
                     * 
                     */
                    uint64_t GetShareOutTotal() const;

                    /**
                     * 设置分享给其它人的域名数量
                     * @param _shareOutTotal 分享给其它人的域名数量
                     * 
                     */
                    void SetShareOutTotal(const uint64_t& _shareOutTotal);

                    /**
                     * 判断参数 ShareOutTotal 是否已赋值
                     * @return ShareOutTotal 是否已赋值
                     * 
                     */
                    bool ShareOutTotalHasBeenSet() const;

                    /**
                     * 获取指定分组内的域名数量
                     * @return GroupTotal 指定分组内的域名数量
                     * 
                     */
                    uint64_t GetGroupTotal() const;

                    /**
                     * 设置指定分组内的域名数量
                     * @param _groupTotal 指定分组内的域名数量
                     * 
                     */
                    void SetGroupTotal(const uint64_t& _groupTotal);

                    /**
                     * 判断参数 GroupTotal 是否已赋值
                     * @return GroupTotal 是否已赋值
                     * 
                     */
                    bool GroupTotalHasBeenSet() const;

                private:

                    /**
                     * 符合条件的域名数量
                     */
                    uint64_t m_domainTotal;
                    bool m_domainTotalHasBeenSet;

                    /**
                     * 用户可以查看的所有域名数量
                     */
                    uint64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                    /**
                     * 用户账号添加的域名数量
                     */
                    uint64_t m_mineTotal;
                    bool m_mineTotalHasBeenSet;

                    /**
                     * 共享给用户的域名数量
                     */
                    uint64_t m_shareTotal;
                    bool m_shareTotalHasBeenSet;

                    /**
                     * 付费域名数量
                     */
                    uint64_t m_vipTotal;
                    bool m_vipTotalHasBeenSet;

                    /**
                     * 暂停的域名数量
                     */
                    uint64_t m_pauseTotal;
                    bool m_pauseTotalHasBeenSet;

                    /**
                     * dns设置错误的域名数量
                     */
                    uint64_t m_errorTotal;
                    bool m_errorTotalHasBeenSet;

                    /**
                     * 锁定的域名数量
                     */
                    uint64_t m_lockTotal;
                    bool m_lockTotalHasBeenSet;

                    /**
                     * 封禁的域名数量
                     */
                    uint64_t m_spamTotal;
                    bool m_spamTotalHasBeenSet;

                    /**
                     * 30天内即将到期的域名数量
                     */
                    uint64_t m_vipExpire;
                    bool m_vipExpireHasBeenSet;

                    /**
                     * 分享给其它人的域名数量
                     */
                    uint64_t m_shareOutTotal;
                    bool m_shareOutTotalHasBeenSet;

                    /**
                     * 指定分组内的域名数量
                     */
                    uint64_t m_groupTotal;
                    bool m_groupTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCOUNTINFO_H_
