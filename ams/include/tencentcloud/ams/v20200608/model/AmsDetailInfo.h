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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_AMSDETAILINFO_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_AMSDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * 机器审核详情列表数据项
                */
                class AmsDetailInfo : public AbstractModel
                {
                public:
                    AmsDetailInfo();
                    ~AmsDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签
                     * @return Label 标签
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置标签
                     * @param _label 标签
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取时长(秒/s)
                     * @return Duration 时长(秒/s)
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置时长(秒/s)
                     * @param _duration 时长(秒/s)
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return Name 任务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
                     * @param _name 任务名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取任务ID，创建任务后返回的TaskId字段
                     * @return TaskID 任务ID，创建任务后返回的TaskId字段
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务ID，创建任务后返回的TaskId字段
                     * @param _taskID 任务ID，创建任务后返回的TaskId字段
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取插入时间
                     * @return InsertTime 插入时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
                     * @param _insertTime 插入时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取数据来源 0机审，其他为自主审核
                     * @return DataForm 数据来源 0机审，其他为自主审核
                     * 
                     */
                    int64_t GetDataForm() const;

                    /**
                     * 设置数据来源 0机审，其他为自主审核
                     * @param _dataForm 数据来源 0机审，其他为自主审核
                     * 
                     */
                    void SetDataForm(const int64_t& _dataForm);

                    /**
                     * 判断参数 DataForm 是否已赋值
                     * @return DataForm 是否已赋值
                     * 
                     */
                    bool DataFormHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取原始命中标签
                     * @return OriginalLabel 原始命中标签
                     * 
                     */
                    std::vector<std::string> GetOriginalLabel() const;

                    /**
                     * 设置原始命中标签
                     * @param _originalLabel 原始命中标签
                     * 
                     */
                    void SetOriginalLabel(const std::vector<std::string>& _originalLabel);

                    /**
                     * 判断参数 OriginalLabel 是否已赋值
                     * @return OriginalLabel 是否已赋值
                     * 
                     */
                    bool OriginalLabelHasBeenSet() const;

                    /**
                     * 获取操作时间
                     * @return OperateTime 操作时间
                     * 
                     */
                    std::string GetOperateTime() const;

                    /**
                     * 设置操作时间
                     * @param _operateTime 操作时间
                     * 
                     */
                    void SetOperateTime(const std::string& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取视频原始地址
                     * @return Url 视频原始地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置视频原始地址
                     * @param _url 视频原始地址
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
                     * 获取封面图地址
                     * @return Thumbnail 封面图地址
                     * 
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置封面图地址
                     * @param _thumbnail 封面图地址
                     * 
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     * 
                     */
                    bool ThumbnailHasBeenSet() const;

                    /**
                     * 获取短音频内容
                     * @return Content 短音频内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置短音频内容
                     * @param _content 短音频内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取短音频个数
                     * @return DetailCount 短音频个数
                     * 
                     */
                    int64_t GetDetailCount() const;

                    /**
                     * 设置短音频个数
                     * @param _detailCount 短音频个数
                     * 
                     */
                    void SetDetailCount(const int64_t& _detailCount);

                    /**
                     * 判断参数 DetailCount 是否已赋值
                     * @return DetailCount 是否已赋值
                     * 
                     */
                    bool DetailCountHasBeenSet() const;

                    /**
                     * 获取音频审核的请求 id
                     * @return RequestId 音频审核的请求 id
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置音频审核的请求 id
                     * @param _requestId 音频审核的请求 id
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取音频机审状态
                     * @return Status 音频机审状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置音频机审状态
                     * @param _status 音频机审状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 时长(秒/s)
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务ID，创建任务后返回的TaskId字段
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 插入时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 数据来源 0机审，其他为自主审核
                     */
                    int64_t m_dataForm;
                    bool m_dataFormHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 原始命中标签
                     */
                    std::vector<std::string> m_originalLabel;
                    bool m_originalLabelHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * 视频原始地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 封面图地址
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                    /**
                     * 短音频内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 短音频个数
                     */
                    int64_t m_detailCount;
                    bool m_detailCountHasBeenSet;

                    /**
                     * 音频审核的请求 id
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 音频机审状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_AMSDETAILINFO_H_
