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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADBREAKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADBREAKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TimeSignalInfo.h>
#include <tencentcloud/mps/v20190612/model/SpliceInsertInfo.h>
#include <tencentcloud/mps/v20190612/model/Metadata.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AdBreakInfo。
                */
                class AdBreakInfo : public AbstractModel
                {
                public:
                    AdBreakInfo();
                    ~AdBreakInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SourceLocationId。
                     * @return SourceLocationId SourceLocationId。
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置SourceLocationId。
                     * @param _sourceLocationId SourceLocationId。
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取VodSourceName。
                     * @return VodSourceName VodSourceName。
                     * 
                     */
                    std::string GetVodSourceName() const;

                    /**
                     * 设置VodSourceName。
                     * @param _vodSourceName VodSourceName。
                     * 
                     */
                    void SetVodSourceName(const std::string& _vodSourceName);

                    /**
                     * 判断参数 VodSourceName 是否已赋值
                     * @return VodSourceName 是否已赋值
                     * 
                     */
                    bool VodSourceNameHasBeenSet() const;

                    /**
                     * 获取Offset。
                     * @return Offset Offset。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset。
                     * @param _offset Offset。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取MessageType，分SpliceInsert和TimeSignal。
                     * @return MessageType MessageType，分SpliceInsert和TimeSignal。
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置MessageType，分SpliceInsert和TimeSignal。
                     * @param _messageType MessageType，分SpliceInsert和TimeSignal。
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取TimeSignalConf。
                     * @return TimeSignalConf TimeSignalConf。
                     * 
                     */
                    TimeSignalInfo GetTimeSignalConf() const;

                    /**
                     * 设置TimeSignalConf。
                     * @param _timeSignalConf TimeSignalConf。
                     * 
                     */
                    void SetTimeSignalConf(const TimeSignalInfo& _timeSignalConf);

                    /**
                     * 判断参数 TimeSignalConf 是否已赋值
                     * @return TimeSignalConf 是否已赋值
                     * 
                     */
                    bool TimeSignalConfHasBeenSet() const;

                    /**
                     * 获取SpliceInsertConf。
                     * @return SpliceInsertConf SpliceInsertConf。
                     * 
                     */
                    SpliceInsertInfo GetSpliceInsertConf() const;

                    /**
                     * 设置SpliceInsertConf。
                     * @param _spliceInsertConf SpliceInsertConf。
                     * 
                     */
                    void SetSpliceInsertConf(const SpliceInsertInfo& _spliceInsertConf);

                    /**
                     * 判断参数 SpliceInsertConf 是否已赋值
                     * @return SpliceInsertConf 是否已赋值
                     * 
                     */
                    bool SpliceInsertConfHasBeenSet() const;

                    /**
                     * 获取Metadatas。
                     * @return Metadatas Metadatas。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置Metadatas。
                     * @param _metadatas Metadatas。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                    /**
                     * 获取SourceLocationName。
                     * @return SourceLocationName SourceLocationName。
                     * 
                     */
                    std::string GetSourceLocationName() const;

                    /**
                     * 设置SourceLocationName。
                     * @param _sourceLocationName SourceLocationName。
                     * 
                     */
                    void SetSourceLocationName(const std::string& _sourceLocationName);

                    /**
                     * 判断参数 SourceLocationName 是否已赋值
                     * @return SourceLocationName 是否已赋值
                     * 
                     */
                    bool SourceLocationNameHasBeenSet() const;

                private:

                    /**
                     * SourceLocationId。
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * VodSourceName。
                     */
                    std::string m_vodSourceName;
                    bool m_vodSourceNameHasBeenSet;

                    /**
                     * Offset。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * MessageType，分SpliceInsert和TimeSignal。
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * TimeSignalConf。
                     */
                    TimeSignalInfo m_timeSignalConf;
                    bool m_timeSignalConfHasBeenSet;

                    /**
                     * SpliceInsertConf。
                     */
                    SpliceInsertInfo m_spliceInsertConf;
                    bool m_spliceInsertConfHasBeenSet;

                    /**
                     * Metadatas。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * SourceLocationName。
                     */
                    std::string m_sourceLocationName;
                    bool m_sourceLocationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADBREAKINFO_H_
