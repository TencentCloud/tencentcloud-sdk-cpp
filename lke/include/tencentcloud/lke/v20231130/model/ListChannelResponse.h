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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTCHANNELRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTCHANNELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ChannelListInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListChannel返回参数结构体
                */
                class ListChannelResponse : public AbstractModel
                {
                public:
                    ListChannelResponse();
                    ~ListChannelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回总数
                     * @return Total 返回总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取渠道信息列表
                     * @return ListChannel 渠道信息列表
                     * 
                     */
                    std::vector<ChannelListInfo> GetListChannel() const;

                    /**
                     * 判断参数 ListChannel 是否已赋值
                     * @return ListChannel 是否已赋值
                     * 
                     */
                    bool ListChannelHasBeenSet() const;

                private:

                    /**
                     * 返回总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 渠道信息列表
                     */
                    std::vector<ChannelListInfo> m_listChannel;
                    bool m_listChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTCHANNELRESPONSE_H_
