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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 直播录制信息
                */
                class LiveRecordInfo : public AbstractModel
                {
                public:
                    LiveRecordInfo();
                    ~LiveRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>直播录制域名</p>
                     * @return Domain <p>直播录制域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>直播录制域名</p>
                     * @param _domain <p>直播录制域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>直播录制Path</p>
                     * @return Path <p>直播录制Path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>直播录制Path</p>
                     * @param _path <p>直播录制Path</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>直播录制流 ID。</p>
                     * @return StreamId <p>直播录制流 ID。</p>
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置<p>直播录制流 ID。</p>
                     * @param _streamId <p>直播录制流 ID。</p>
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取<p>录制起始时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return RecordStartTime <p>录制起始时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetRecordStartTime() const;

                    /**
                     * 设置<p>录制起始时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _recordStartTime <p>录制起始时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetRecordStartTime(const std::string& _recordStartTime);

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     * 
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>录制结束时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return RecordEndTime <p>录制结束时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetRecordEndTime() const;

                    /**
                     * 设置<p>录制结束时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _recordEndTime <p>录制结束时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetRecordEndTime(const std::string& _recordEndTime);

                    /**
                     * 判断参数 RecordEndTime 是否已赋值
                     * @return RecordEndTime 是否已赋值
                     * 
                     */
                    bool RecordEndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>直播录制域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>直播录制Path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>直播录制流 ID。</p>
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * <p>录制起始时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * <p>录制结束时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_recordEndTime;
                    bool m_recordEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
