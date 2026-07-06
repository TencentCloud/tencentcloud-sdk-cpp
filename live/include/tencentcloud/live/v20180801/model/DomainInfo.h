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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播域名信息
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>直播域名。</p>
                     * @return Name <p>直播域名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>直播域名。</p>
                     * @param _name <p>直播域名。</p>
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
                     * 获取<p>域名类型:<br>0: 推流。<br>1: 播放。</p>
                     * @return Type <p>域名类型:<br>0: 推流。<br>1: 播放。</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>域名类型:<br>0: 推流。<br>1: 播放。</p>
                     * @param _type <p>域名类型:<br>0: 推流。<br>1: 播放。</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>域名状态:<br>0: 停用。<br>1: 启用。</p>
                     * @return Status <p>域名状态:<br>0: 停用。<br>1: 启用。</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>域名状态:<br>0: 停用。<br>1: 启用。</p>
                     * @param _status <p>域名状态:<br>0: 停用。<br>1: 启用。</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>添加时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @return CreateTime <p>添加时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>添加时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @param _createTime <p>添加时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否有 CName 到固定规则域名:<br>0: 否。<br>1: 是。</p>
                     * @return BCName <p>是否有 CName 到固定规则域名:<br>0: 否。<br>1: 是。</p>
                     * 
                     */
                    uint64_t GetBCName() const;

                    /**
                     * 设置<p>是否有 CName 到固定规则域名:<br>0: 否。<br>1: 是。</p>
                     * @param _bCName <p>是否有 CName 到固定规则域名:<br>0: 否。<br>1: 是。</p>
                     * 
                     */
                    void SetBCName(const uint64_t& _bCName);

                    /**
                     * 判断参数 BCName 是否已赋值
                     * @return BCName 是否已赋值
                     * 
                     */
                    bool BCNameHasBeenSet() const;

                    /**
                     * 获取<p>cname 对应的域名。</p>
                     * @return TargetDomain <p>cname 对应的域名。</p>
                     * 
                     */
                    std::string GetTargetDomain() const;

                    /**
                     * 设置<p>cname 对应的域名。</p>
                     * @param _targetDomain <p>cname 对应的域名。</p>
                     * 
                     */
                    void SetTargetDomain(const std::string& _targetDomain);

                    /**
                     * 判断参数 TargetDomain 是否已赋值
                     * @return TargetDomain 是否已赋值
                     * 
                     */
                    bool TargetDomainHasBeenSet() const;

                    /**
                     * 获取<p>播放区域，只在 Type=1 时该参数有意义。<br>1: 国内。<br>2: 全球。<br>3: 海外。</p>
                     * @return PlayType <p>播放区域，只在 Type=1 时该参数有意义。<br>1: 国内。<br>2: 全球。<br>3: 海外。</p>
                     * 
                     */
                    int64_t GetPlayType() const;

                    /**
                     * 设置<p>播放区域，只在 Type=1 时该参数有意义。<br>1: 国内。<br>2: 全球。<br>3: 海外。</p>
                     * @param _playType <p>播放区域，只在 Type=1 时该参数有意义。<br>1: 国内。<br>2: 全球。<br>3: 海外。</p>
                     * 
                     */
                    void SetPlayType(const int64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     * 
                     */
                    bool PlayTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否慢直播:<br>0: 普通直播。<br>1: 慢直播。</p>
                     * @return IsDelayLive <p>是否慢直播:<br>0: 普通直播。<br>1: 慢直播。</p>
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置<p>是否慢直播:<br>0: 普通直播。<br>1: 慢直播。</p>
                     * @param _isDelayLive <p>是否慢直播:<br>0: 普通直播。<br>1: 慢直播。</p>
                     * 
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取<p>当前客户使用的 cname 信息。</p>
                     * @return CurrentCName <p>当前客户使用的 cname 信息。</p>
                     * 
                     */
                    std::string GetCurrentCName() const;

                    /**
                     * 设置<p>当前客户使用的 cname 信息。</p>
                     * @param _currentCName <p>当前客户使用的 cname 信息。</p>
                     * 
                     */
                    void SetCurrentCName(const std::string& _currentCName);

                    /**
                     * 判断参数 CurrentCName 是否已赋值
                     * @return CurrentCName 是否已赋值
                     * 
                     */
                    bool CurrentCNameHasBeenSet() const;

                    /**
                     * 获取<p>失效参数，可忽略。</p>
                     * @return RentTag <p>失效参数，可忽略。</p>
                     * 
                     */
                    int64_t GetRentTag() const;

                    /**
                     * 设置<p>失效参数，可忽略。</p>
                     * @param _rentTag <p>失效参数，可忽略。</p>
                     * 
                     */
                    void SetRentTag(const int64_t& _rentTag);

                    /**
                     * 判断参数 RentTag 是否已赋值
                     * @return RentTag 是否已赋值
                     * 
                     */
                    bool RentTagHasBeenSet() const;

                    /**
                     * 获取<p>失效参数，可忽略。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @return RentExpireTime <p>失效参数，可忽略。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    std::string GetRentExpireTime() const;

                    /**
                     * 设置<p>失效参数，可忽略。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @param _rentExpireTime <p>失效参数，可忽略。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    void SetRentExpireTime(const std::string& _rentExpireTime);

                    /**
                     * 判断参数 RentExpireTime 是否已赋值
                     * @return RentExpireTime 是否已赋值
                     * 
                     */
                    bool RentExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>0: 标准直播。<br>1: 小程序直播。</p>
                     * @return IsMiniProgramLive <p>0: 标准直播。<br>1: 小程序直播。</p>
                     * 
                     */
                    int64_t GetIsMiniProgramLive() const;

                    /**
                     * 设置<p>0: 标准直播。<br>1: 小程序直播。</p>
                     * @param _isMiniProgramLive <p>0: 标准直播。<br>1: 小程序直播。</p>
                     * 
                     */
                    void SetIsMiniProgramLive(const int64_t& _isMiniProgramLive);

                    /**
                     * 判断参数 IsMiniProgramLive 是否已赋值
                     * @return IsMiniProgramLive 是否已赋值
                     * 
                     */
                    bool IsMiniProgramLiveHasBeenSet() const;

                private:

                    /**
                     * <p>直播域名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>域名类型:<br>0: 推流。<br>1: 播放。</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>域名状态:<br>0: 停用。<br>1: 启用。</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>添加时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>是否有 CName 到固定规则域名:<br>0: 否。<br>1: 是。</p>
                     */
                    uint64_t m_bCName;
                    bool m_bCNameHasBeenSet;

                    /**
                     * <p>cname 对应的域名。</p>
                     */
                    std::string m_targetDomain;
                    bool m_targetDomainHasBeenSet;

                    /**
                     * <p>播放区域，只在 Type=1 时该参数有意义。<br>1: 国内。<br>2: 全球。<br>3: 海外。</p>
                     */
                    int64_t m_playType;
                    bool m_playTypeHasBeenSet;

                    /**
                     * <p>是否慢直播:<br>0: 普通直播。<br>1: 慢直播。</p>
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * <p>当前客户使用的 cname 信息。</p>
                     */
                    std::string m_currentCName;
                    bool m_currentCNameHasBeenSet;

                    /**
                     * <p>失效参数，可忽略。</p>
                     */
                    int64_t m_rentTag;
                    bool m_rentTagHasBeenSet;

                    /**
                     * <p>失效参数，可忽略。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     */
                    std::string m_rentExpireTime;
                    bool m_rentExpireTimeHasBeenSet;

                    /**
                     * <p>0: 标准直播。<br>1: 小程序直播。</p>
                     */
                    int64_t m_isMiniProgramLive;
                    bool m_isMiniProgramLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_
