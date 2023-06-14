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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeLiveRecordTemplates请求参数结构体
                */
                class DescribeLiveRecordTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLiveRecordTemplatesRequest();
                    ~DescribeLiveRecordTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否属于慢直播模板，默认：0。
0： 标准直播。
1：慢直播。
                     * @return IsDelayLive 是否属于慢直播模板，默认：0。
0： 标准直播。
1：慢直播。
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置是否属于慢直播模板，默认：0。
0： 标准直播。
1：慢直播。
                     * @param _isDelayLive 是否属于慢直播模板，默认：0。
0： 标准直播。
1：慢直播。
                     * 
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                private:

                    /**
                     * 是否属于慢直播模板，默认：0。
0： 标准直播。
1：慢直播。
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
