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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYMETAREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYMETAREQUEST_H_

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
                * DescribeReplayMeta请求参数结构体
                */
                class DescribeReplayMetaRequest : public AbstractModel
                {
                public:
                    DescribeReplayMetaRequest();
                    ~DescribeReplayMetaRequest() = default;
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
                     * 获取<p>会话id</p>
                     * @return SessionId <p>会话id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话id</p>
                     * @param _sessionId <p>会话id</p>
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
                     * 获取<p>是否仅查询指定录制分片的轻量索引。默认false。为true时必须通过IndexSegmentIds指定1～16个分片ID，返回IndexEntries，不返回录制正文。</p>
                     * @return IndexOnly <p>是否仅查询指定录制分片的轻量索引。默认false。为true时必须通过IndexSegmentIds指定1～16个分片ID，返回IndexEntries，不返回录制正文。</p>
                     * 
                     */
                    bool GetIndexOnly() const;

                    /**
                     * 设置<p>是否仅查询指定录制分片的轻量索引。默认false。为true时必须通过IndexSegmentIds指定1～16个分片ID，返回IndexEntries，不返回录制正文。</p>
                     * @param _indexOnly <p>是否仅查询指定录制分片的轻量索引。默认false。为true时必须通过IndexSegmentIds指定1～16个分片ID，返回IndexEntries，不返回录制正文。</p>
                     * 
                     */
                    void SetIndexOnly(const bool& _indexOnly);

                    /**
                     * 判断参数 IndexOnly 是否已赋值
                     * @return IndexOnly 是否已赋值
                     * 
                     */
                    bool IndexOnlyHasBeenSet() const;

                    /**
                     * 获取<p>待查询索引的录制分片ID列表。仅在IndexOnly为true时使用，包含1～16个非负且不重复的分片ID。ProbeMissingIndex为true时仅允许指定一个分片ID。</p>
                     * @return IndexSegmentIds <p>待查询索引的录制分片ID列表。仅在IndexOnly为true时使用，包含1～16个非负且不重复的分片ID。ProbeMissingIndex为true时仅允许指定一个分片ID。</p>
                     * 
                     */
                    std::vector<int64_t> GetIndexSegmentIds() const;

                    /**
                     * 设置<p>待查询索引的录制分片ID列表。仅在IndexOnly为true时使用，包含1～16个非负且不重复的分片ID。ProbeMissingIndex为true时仅允许指定一个分片ID。</p>
                     * @param _indexSegmentIds <p>待查询索引的录制分片ID列表。仅在IndexOnly为true时使用，包含1～16个非负且不重复的分片ID。ProbeMissingIndex为true时仅允许指定一个分片ID。</p>
                     * 
                     */
                    void SetIndexSegmentIds(const std::vector<int64_t>& _indexSegmentIds);

                    /**
                     * 判断参数 IndexSegmentIds 是否已赋值
                     * @return IndexSegmentIds 是否已赋值
                     * 
                     */
                    bool IndexSegmentIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否在录制分片缺少索引时进行受限兼容探测。默认false。为true时必须同时设置IndexOnly为true，且IndexSegmentIds仅包含一个分片ID。</p>
                     * @return ProbeMissingIndex <p>是否在录制分片缺少索引时进行受限兼容探测。默认false。为true时必须同时设置IndexOnly为true，且IndexSegmentIds仅包含一个分片ID。</p>
                     * 
                     */
                    bool GetProbeMissingIndex() const;

                    /**
                     * 设置<p>是否在录制分片缺少索引时进行受限兼容探测。默认false。为true时必须同时设置IndexOnly为true，且IndexSegmentIds仅包含一个分片ID。</p>
                     * @param _probeMissingIndex <p>是否在录制分片缺少索引时进行受限兼容探测。默认false。为true时必须同时设置IndexOnly为true，且IndexSegmentIds仅包含一个分片ID。</p>
                     * 
                     */
                    void SetProbeMissingIndex(const bool& _probeMissingIndex);

                    /**
                     * 判断参数 ProbeMissingIndex 是否已赋值
                     * @return ProbeMissingIndex 是否已赋值
                     * 
                     */
                    bool ProbeMissingIndexHasBeenSet() const;

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
                     * <p>会话id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>是否仅查询指定录制分片的轻量索引。默认false。为true时必须通过IndexSegmentIds指定1～16个分片ID，返回IndexEntries，不返回录制正文。</p>
                     */
                    bool m_indexOnly;
                    bool m_indexOnlyHasBeenSet;

                    /**
                     * <p>待查询索引的录制分片ID列表。仅在IndexOnly为true时使用，包含1～16个非负且不重复的分片ID。ProbeMissingIndex为true时仅允许指定一个分片ID。</p>
                     */
                    std::vector<int64_t> m_indexSegmentIds;
                    bool m_indexSegmentIdsHasBeenSet;

                    /**
                     * <p>是否在录制分片缺少索引时进行受限兼容探测。默认false。为true时必须同时设置IndexOnly为true，且IndexSegmentIds仅包含一个分片ID。</p>
                     */
                    bool m_probeMissingIndex;
                    bool m_probeMissingIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYMETAREQUEST_H_
