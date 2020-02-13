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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERINFO_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilter.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音文件过滤详情
                */
                class VoiceFilterInfo : public AbstractModel
                {
                public:
                    VoiceFilterInfo();
                    ~VoiceFilterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BizId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取文件ID，表示文件唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId 文件ID，表示文件唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID，表示文件唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileId 文件ID，表示文件唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileName 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OpenId 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取数据创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 数据创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置数据创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp 数据创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取过滤结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 过滤结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VoiceFilter> GetData() const;

                    /**
                     * 设置过滤结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Data 过滤结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetData(const std::vector<VoiceFilter>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 文件ID，表示文件唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 数据创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 过滤结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VoiceFilter> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERINFO_H_
