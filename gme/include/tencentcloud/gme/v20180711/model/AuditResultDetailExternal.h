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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_AUDITRESULTDETAILEXTERNAL_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_AUDITRESULTDETAILEXTERNAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 审核结果明细（对外）
                */
                class AuditResultDetailExternal : public AbstractModel
                {
                public:
                    AuditResultDetailExternal();
                    ~AuditResultDetailExternal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取房间 ID
                     * @return RoomId 房间 ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间 ID
                     * @param _roomId 房间 ID
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取UserID
                     * @return OpenId UserID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置UserID
                     * @param _openId UserID
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Label 标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
                     * @param _label 标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取恶意分数
                     * @return Rate 恶意分数
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置恶意分数
                     * @param _rate 恶意分数
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取音频 Url
                     * @return Url 音频 Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置音频 Url
                     * @param _url 音频 Url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取文件Id
                     * @return FileId 文件Id
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件Id
                     * @param _fileId 文件Id
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取ASR结果
                     * @return Info ASR结果
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置ASR结果
                     * @param _info ASR结果
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 房间 ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * UserID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 恶意分数
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 音频 Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 文件Id
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * ASR结果
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_AUDITRESULTDETAILEXTERNAL_H_
