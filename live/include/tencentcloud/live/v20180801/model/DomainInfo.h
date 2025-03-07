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
                     * 获取直播域名。
                     * @return Name 直播域名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置直播域名。
                     * @param _name 直播域名。
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
                     * 获取域名类型:
0: 推流。
1: 播放。
                     * @return Type 域名类型:
0: 推流。
1: 播放。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置域名类型:
0: 推流。
1: 播放。
                     * @param _type 域名类型:
0: 推流。
1: 播放。
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
                     * 获取域名状态:
0: 停用。
1: 启用。
                     * @return Status 域名状态:
0: 停用。
1: 启用。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置域名状态:
0: 停用。
1: 启用。
                     * @param _status 域名状态:
0: 停用。
1: 启用。
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
                     * 获取添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return CreateTime 添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _createTime 添加时间。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取是否有 CName 到固定规则域名:
0: 否。
1: 是。
                     * @return BCName 是否有 CName 到固定规则域名:
0: 否。
1: 是。
                     * 
                     */
                    uint64_t GetBCName() const;

                    /**
                     * 设置是否有 CName 到固定规则域名:
0: 否。
1: 是。
                     * @param _bCName 是否有 CName 到固定规则域名:
0: 否。
1: 是。
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
                     * 获取cname 对应的域名。
                     * @return TargetDomain cname 对应的域名。
                     * 
                     */
                    std::string GetTargetDomain() const;

                    /**
                     * 设置cname 对应的域名。
                     * @param _targetDomain cname 对应的域名。
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
                     * 获取播放区域，只在 Type=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * @return PlayType 播放区域，只在 Type=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * 
                     */
                    int64_t GetPlayType() const;

                    /**
                     * 设置播放区域，只在 Type=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     * @param _playType 播放区域，只在 Type=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
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
                     * 获取是否慢直播:
0: 普通直播。
1: 慢直播。
                     * @return IsDelayLive 是否慢直播:
0: 普通直播。
1: 慢直播。
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置是否慢直播:
0: 普通直播。
1: 慢直播。
                     * @param _isDelayLive 是否慢直播:
0: 普通直播。
1: 慢直播。
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
                     * 获取当前客户使用的 cname 信息。
                     * @return CurrentCName 当前客户使用的 cname 信息。
                     * 
                     */
                    std::string GetCurrentCName() const;

                    /**
                     * 设置当前客户使用的 cname 信息。
                     * @param _currentCName 当前客户使用的 cname 信息。
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
                     * 获取失效参数，可忽略。
                     * @return RentTag 失效参数，可忽略。
                     * 
                     */
                    int64_t GetRentTag() const;

                    /**
                     * 设置失效参数，可忽略。
                     * @param _rentTag 失效参数，可忽略。
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
                     * 获取失效参数，可忽略。
注：此字段为北京时间（UTC+8时区）。
                     * @return RentExpireTime 失效参数，可忽略。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetRentExpireTime() const;

                    /**
                     * 设置失效参数，可忽略。
注：此字段为北京时间（UTC+8时区）。
                     * @param _rentExpireTime 失效参数，可忽略。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取0: 标准直播。
1: 小程序直播。
                     * @return IsMiniProgramLive 0: 标准直播。
1: 小程序直播。
                     * 
                     */
                    int64_t GetIsMiniProgramLive() const;

                    /**
                     * 设置0: 标准直播。
1: 小程序直播。
                     * @param _isMiniProgramLive 0: 标准直播。
1: 小程序直播。
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
                     * 直播域名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 域名类型:
0: 推流。
1: 播放。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 域名状态:
0: 停用。
1: 启用。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 添加时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否有 CName 到固定规则域名:
0: 否。
1: 是。
                     */
                    uint64_t m_bCName;
                    bool m_bCNameHasBeenSet;

                    /**
                     * cname 对应的域名。
                     */
                    std::string m_targetDomain;
                    bool m_targetDomainHasBeenSet;

                    /**
                     * 播放区域，只在 Type=1 时该参数有意义。
1: 国内。
2: 全球。
3: 海外。
                     */
                    int64_t m_playType;
                    bool m_playTypeHasBeenSet;

                    /**
                     * 是否慢直播:
0: 普通直播。
1: 慢直播。
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * 当前客户使用的 cname 信息。
                     */
                    std::string m_currentCName;
                    bool m_currentCNameHasBeenSet;

                    /**
                     * 失效参数，可忽略。
                     */
                    int64_t m_rentTag;
                    bool m_rentTagHasBeenSet;

                    /**
                     * 失效参数，可忽略。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_rentExpireTime;
                    bool m_rentExpireTimeHasBeenSet;

                    /**
                     * 0: 标准直播。
1: 小程序直播。
                     */
                    int64_t m_isMiniProgramLive;
                    bool m_isMiniProgramLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_
