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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_NOTICEINFORESULT_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_NOTICEINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sslpod/v20190605/model/LimitInfo.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 通知信息结果
                */
                class NoticeInfoResult : public AbstractModel
                {
                public:
                    NoticeInfoResult();
                    ~NoticeInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知ID
                     * @return Id 通知ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置通知ID
                     * @param _id 通知ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取通知开关信息；0：关闭；15开启
                     * @return NoticeType 通知开关信息；0：关闭；15开启
                     * 
                     */
                    int64_t GetNoticeType() const;

                    /**
                     * 设置通知开关信息；0：关闭；15开启
                     * @param _noticeType 通知开关信息；0：关闭；15开启
                     * 
                     */
                    void SetNoticeType(const int64_t& _noticeType);

                    /**
                     * 判断参数 NoticeType 是否已赋值
                     * @return NoticeType 是否已赋值
                     * 
                     */
                    bool NoticeTypeHasBeenSet() const;

                    /**
                     * 获取额度信息
                     * @return LimitInfos 额度信息
                     * 
                     */
                    std::vector<LimitInfo> GetLimitInfos() const;

                    /**
                     * 设置额度信息
                     * @param _limitInfos 额度信息
                     * 
                     */
                    void SetLimitInfos(const std::vector<LimitInfo>& _limitInfos);

                    /**
                     * 判断参数 LimitInfos 是否已赋值
                     * @return LimitInfos 是否已赋值
                     * 
                     */
                    bool LimitInfosHasBeenSet() const;

                private:

                    /**
                     * 通知ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 通知开关信息；0：关闭；15开启
                     */
                    int64_t m_noticeType;
                    bool m_noticeTypeHasBeenSet;

                    /**
                     * 额度信息
                     */
                    std::vector<LimitInfo> m_limitInfos;
                    bool m_limitInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_NOTICEINFORESULT_H_
