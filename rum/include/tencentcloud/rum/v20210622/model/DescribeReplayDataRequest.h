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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYDATAREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeReplayData请求参数结构体
                */
                class DescribeReplayDataRequest : public AbstractModel
                {
                public:
                    DescribeReplayDataRequest();
                    ~DescribeReplayDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>回放id</p>
                     * @return ReplayId <p>回放id</p>
                     * 
                     */
                    std::string GetReplayId() const;

                    /**
                     * 设置<p>回放id</p>
                     * @param _replayId <p>回放id</p>
                     * 
                     */
                    void SetReplayId(const std::string& _replayId);

                    /**
                     * 判断参数 ReplayId 是否已赋值
                     * @return ReplayId 是否已赋值
                     * 
                     */
                    bool ReplayIdHasBeenSet() const;

                    /**
                     * 获取<p>session id</p>
                     * @return SessionId <p>session id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>session id</p>
                     * @param _sessionId <p>session id</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>segment id</p>
                     * @return SegmentId <p>segment id</p>
                     * 
                     */
                    int64_t GetSegmentId() const;

                    /**
                     * 设置<p>segment id</p>
                     * @param _segmentId <p>segment id</p>
                     * 
                     */
                    void SetSegmentId(const int64_t& _segmentId);

                    /**
                     * 判断参数 SegmentId 是否已赋值
                     * @return SegmentId 是否已赋值
                     * 
                     */
                    bool SegmentIdHasBeenSet() const;

                    /**
                     * 获取<p>单个录制分片解压后的最大允许字节数</p><p>取值范围：[1, 8388608]</p><p>单位：字节（Byte）</p>
                     * @return MaxDecodedBytes <p>单个录制分片解压后的最大允许字节数</p><p>取值范围：[1, 8388608]</p><p>单位：字节（Byte）</p>
                     * 
                     */
                    int64_t GetMaxDecodedBytes() const;

                    /**
                     * 设置<p>单个录制分片解压后的最大允许字节数</p><p>取值范围：[1, 8388608]</p><p>单位：字节（Byte）</p>
                     * @param _maxDecodedBytes <p>单个录制分片解压后的最大允许字节数</p><p>取值范围：[1, 8388608]</p><p>单位：字节（Byte）</p>
                     * 
                     */
                    void SetMaxDecodedBytes(const int64_t& _maxDecodedBytes);

                    /**
                     * 判断参数 MaxDecodedBytes 是否已赋值
                     * @return MaxDecodedBytes 是否已赋值
                     * 
                     */
                    bool MaxDecodedBytesHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>回放id</p>
                     */
                    std::string m_replayId;
                    bool m_replayIdHasBeenSet;

                    /**
                     * <p>session id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>segment id</p>
                     */
                    int64_t m_segmentId;
                    bool m_segmentIdHasBeenSet;

                    /**
                     * <p>单个录制分片解压后的最大允许字节数</p><p>取值范围：[1, 8388608]</p><p>单位：字节（Byte）</p>
                     */
                    int64_t m_maxDecodedBytes;
                    bool m_maxDecodedBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYDATAREQUEST_H_
