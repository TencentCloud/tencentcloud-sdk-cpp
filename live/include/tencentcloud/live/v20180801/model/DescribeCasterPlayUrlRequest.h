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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERPLAYURLREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERPLAYURLREQUEST_H_

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
                * DescribeCasterPlayUrl请求参数结构体
                */
                class DescribeCasterPlayUrlRequest : public AbstractModel
                {
                public:
                    DescribeCasterPlayUrlRequest();
                    ~DescribeCasterPlayUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台ID
                     * @return CasterId 导播台ID
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置导播台ID
                     * @param _casterId 导播台ID
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取请求播放url的类型。
取值范围[1，2，3]
1：获取输入源的播放url
2：获取pvw的播放url
3：获取pgm的播放url
                     * @return PlayUrlType 请求播放url的类型。
取值范围[1，2，3]
1：获取输入源的播放url
2：获取pvw的播放url
3：获取pgm的播放url
                     * 
                     */
                    int64_t GetPlayUrlType() const;

                    /**
                     * 设置请求播放url的类型。
取值范围[1，2，3]
1：获取输入源的播放url
2：获取pvw的播放url
3：获取pgm的播放url
                     * @param _playUrlType 请求播放url的类型。
取值范围[1，2，3]
1：获取输入源的播放url
2：获取pvw的播放url
3：获取pgm的播放url
                     * 
                     */
                    void SetPlayUrlType(const int64_t& _playUrlType);

                    /**
                     * 判断参数 PlayUrlType 是否已赋值
                     * @return PlayUrlType 是否已赋值
                     * 
                     */
                    bool PlayUrlTypeHasBeenSet() const;

                    /**
                     * 获取仅在PlayUrlType为1时生效，此时该参数表示请求的输入源Index。
注：对应的输入源必须存在。
                     * @return PlayUrlIndex 仅在PlayUrlType为1时生效，此时该参数表示请求的输入源Index。
注：对应的输入源必须存在。
                     * 
                     */
                    int64_t GetPlayUrlIndex() const;

                    /**
                     * 设置仅在PlayUrlType为1时生效，此时该参数表示请求的输入源Index。
注：对应的输入源必须存在。
                     * @param _playUrlIndex 仅在PlayUrlType为1时生效，此时该参数表示请求的输入源Index。
注：对应的输入源必须存在。
                     * 
                     */
                    void SetPlayUrlIndex(const int64_t& _playUrlIndex);

                    /**
                     * 判断参数 PlayUrlIndex 是否已赋值
                     * @return PlayUrlIndex 是否已赋值
                     * 
                     */
                    bool PlayUrlIndexHasBeenSet() const;

                private:

                    /**
                     * 导播台ID
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 请求播放url的类型。
取值范围[1，2，3]
1：获取输入源的播放url
2：获取pvw的播放url
3：获取pgm的播放url
                     */
                    int64_t m_playUrlType;
                    bool m_playUrlTypeHasBeenSet;

                    /**
                     * 仅在PlayUrlType为1时生效，此时该参数表示请求的输入源Index。
注：对应的输入源必须存在。
                     */
                    int64_t m_playUrlIndex;
                    bool m_playUrlIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERPLAYURLREQUEST_H_
