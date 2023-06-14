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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBELINKSREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBELINKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DescribeLinks请求参数结构体
                */
                class DescribeLinksRequest : public AbstractModel
                {
                public:
                    DescribeLinksRequest();
                    ~DescribeLinksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云兔卡ID
                     * @return LinkID 云兔卡ID
                     * 
                     */
                    int64_t GetLinkID() const;

                    /**
                     * 设置云兔卡ID
                     * @param _linkID 云兔卡ID
                     * 
                     */
                    void SetLinkID(const int64_t& _linkID);

                    /**
                     * 判断参数 LinkID 是否已赋值
                     * @return LinkID 是否已赋值
                     * 
                     */
                    bool LinkIDHasBeenSet() const;

                    /**
                     * 获取运营商ICCID
                     * @return ICCID 运营商ICCID
                     * 
                     */
                    std::string GetICCID() const;

                    /**
                     * 设置运营商ICCID
                     * @param _iCCID 运营商ICCID
                     * 
                     */
                    void SetICCID(const std::string& _iCCID);

                    /**
                     * 判断参数 ICCID 是否已赋值
                     * @return ICCID 是否已赋值
                     * 
                     */
                    bool ICCIDHasBeenSet() const;

                    /**
                     * 获取设备码
                     * @return IMEI 设备码
                     * 
                     */
                    std::string GetIMEI() const;

                    /**
                     * 设置设备码
                     * @param _iMEI 设备码
                     * 
                     */
                    void SetIMEI(const std::string& _iMEI);

                    /**
                     * 判断参数 IMEI 是否已赋值
                     * @return IMEI 是否已赋值
                     * 
                     */
                    bool IMEIHasBeenSet() const;

                    /**
                     * 获取卡片状态
                     * @return Status 卡片状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置卡片状态
                     * @param _status 卡片状态
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
                     * 获取运营商 1移动 2联通 3电信
                     * @return TeleOperator 运营商 1移动 2联通 3电信
                     * 
                     */
                    uint64_t GetTeleOperator() const;

                    /**
                     * 设置运营商 1移动 2联通 3电信
                     * @param _teleOperator 运营商 1移动 2联通 3电信
                     * 
                     */
                    void SetTeleOperator(const uint64_t& _teleOperator);

                    /**
                     * 判断参数 TeleOperator 是否已赋值
                     * @return TeleOperator 是否已赋值
                     * 
                     */
                    bool TeleOperatorHasBeenSet() const;

                    /**
                     * 获取标签ID
                     * @return TagID 标签ID
                     * 
                     */
                    uint64_t GetTagID() const;

                    /**
                     * 设置标签ID
                     * @param _tagID 标签ID
                     * 
                     */
                    void SetTagID(const uint64_t& _tagID);

                    /**
                     * 判断参数 TagID 是否已赋值
                     * @return TagID 是否已赋值
                     * 
                     */
                    bool TagIDHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return TacticID 策略ID
                     * 
                     */
                    uint64_t GetTacticID() const;

                    /**
                     * 设置策略ID
                     * @param _tacticID 策略ID
                     * 
                     */
                    void SetTacticID(const uint64_t& _tacticID);

                    /**
                     * 判断参数 TacticID 是否已赋值
                     * @return TacticID 是否已赋值
                     * 
                     */
                    bool TacticIDHasBeenSet() const;

                    /**
                     * 获取设备在线状态 0 未激活 1 在线 2 离线
                     * @return LinkedState 设备在线状态 0 未激活 1 在线 2 离线
                     * 
                     */
                    int64_t GetLinkedState() const;

                    /**
                     * 设置设备在线状态 0 未激活 1 在线 2 离线
                     * @param _linkedState 设备在线状态 0 未激活 1 在线 2 离线
                     * 
                     */
                    void SetLinkedState(const int64_t& _linkedState);

                    /**
                     * 判断参数 LinkedState 是否已赋值
                     * @return LinkedState 是否已赋值
                     * 
                     */
                    bool LinkedStateHasBeenSet() const;

                    /**
                     * 获取标签ID 集合
                     * @return TagIDs 标签ID 集合
                     * 
                     */
                    std::vector<int64_t> GetTagIDs() const;

                    /**
                     * 设置标签ID 集合
                     * @param _tagIDs 标签ID 集合
                     * 
                     */
                    void SetTagIDs(const std::vector<int64_t>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取翻页大小, 默认翻页大小为10，最大数量为500
                     * @return Limit 翻页大小, 默认翻页大小为10，最大数量为500
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页大小, 默认翻页大小为10，最大数量为500
                     * @param _limit 翻页大小, 默认翻页大小为10，最大数量为500
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取翻页起始
                     * @return Offset 翻页起始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页起始
                     * @param _offset 翻页起始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 云兔卡ID
                     */
                    int64_t m_linkID;
                    bool m_linkIDHasBeenSet;

                    /**
                     * 运营商ICCID
                     */
                    std::string m_iCCID;
                    bool m_iCCIDHasBeenSet;

                    /**
                     * 设备码
                     */
                    std::string m_iMEI;
                    bool m_iMEIHasBeenSet;

                    /**
                     * 卡片状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运营商 1移动 2联通 3电信
                     */
                    uint64_t m_teleOperator;
                    bool m_teleOperatorHasBeenSet;

                    /**
                     * 标签ID
                     */
                    uint64_t m_tagID;
                    bool m_tagIDHasBeenSet;

                    /**
                     * 策略ID
                     */
                    uint64_t m_tacticID;
                    bool m_tacticIDHasBeenSet;

                    /**
                     * 设备在线状态 0 未激活 1 在线 2 离线
                     */
                    int64_t m_linkedState;
                    bool m_linkedStateHasBeenSet;

                    /**
                     * 标签ID 集合
                     */
                    std::vector<int64_t> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * 翻页大小, 默认翻页大小为10，最大数量为500
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页起始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBELINKSREQUEST_H_
