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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULT_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ScanPiece.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音检测结果返回
                */
                class DescribeScanResult : public AbstractModel
                {
                public:
                    DescribeScanResult();
                    ~DescribeScanResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务返回码
                     * @return Code 业务返回码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置业务返回码
                     * @param _code 业务返回码
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取数据唯一 ID
                     * @return DataId 数据唯一 ID
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据唯一 ID
                     * @param _dataId 数据唯一 ID
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取检测完成的时间戳
                     * @return ScanFinishTime 检测完成的时间戳
                     * 
                     */
                    uint64_t GetScanFinishTime() const;

                    /**
                     * 设置检测完成的时间戳
                     * @param _scanFinishTime 检测完成的时间戳
                     * 
                     */
                    void SetScanFinishTime(const uint64_t& _scanFinishTime);

                    /**
                     * 判断参数 ScanFinishTime 是否已赋值
                     * @return ScanFinishTime 是否已赋值
                     * 
                     */
                    bool ScanFinishTimeHasBeenSet() const;

                    /**
                     * 获取是否违规
                     * @return HitFlag 是否违规
                     * 
                     */
                    bool GetHitFlag() const;

                    /**
                     * 设置是否违规
                     * @param _hitFlag 是否违规
                     * 
                     */
                    void SetHitFlag(const bool& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取是否为流
                     * @return Live 是否为流
                     * 
                     */
                    bool GetLive() const;

                    /**
                     * 设置是否为流
                     * @param _live 是否为流
                     * 
                     */
                    void SetLive(const bool& _live);

                    /**
                     * 判断参数 Live 是否已赋值
                     * @return Live 是否已赋值
                     * 
                     */
                    bool LiveHasBeenSet() const;

                    /**
                     * 获取业务返回描述
                     * @return Msg 业务返回描述
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置业务返回描述
                     * @param _msg 业务返回描述
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取检测结果，Code 为 0 时返回
                     * @return ScanPiece 检测结果，Code 为 0 时返回
                     * 
                     */
                    std::vector<ScanPiece> GetScanPiece() const;

                    /**
                     * 设置检测结果，Code 为 0 时返回
                     * @param _scanPiece 检测结果，Code 为 0 时返回
                     * 
                     */
                    void SetScanPiece(const std::vector<ScanPiece>& _scanPiece);

                    /**
                     * 判断参数 ScanPiece 是否已赋值
                     * @return ScanPiece 是否已赋值
                     * 
                     */
                    bool ScanPieceHasBeenSet() const;

                    /**
                     * 获取提交检测的时间戳
                     * @return ScanStartTime 提交检测的时间戳
                     * 
                     */
                    uint64_t GetScanStartTime() const;

                    /**
                     * 设置提交检测的时间戳
                     * @param _scanStartTime 提交检测的时间戳
                     * 
                     */
                    void SetScanStartTime(const uint64_t& _scanStartTime);

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取语音检测场景，对应请求时的 Scene
                     * @return Scenes 语音检测场景，对应请求时的 Scene
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置语音检测场景，对应请求时的 Scene
                     * @param _scenes 语音检测场景，对应请求时的 Scene
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取语音检测任务 ID，由后台分配
                     * @return TaskId 语音检测任务 ID，由后台分配
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置语音检测任务 ID，由后台分配
                     * @param _taskId 语音检测任务 ID，由后台分配
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
                     * 获取文件或接流地址
                     * @return Url 文件或接流地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文件或接流地址
                     * @param _url 文件或接流地址
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
                     * 获取检测任务执行结果状态，分别为：
<li>Start: 任务开始</li>
<li>Success: 成功结束</li>
<li>Error: 异常</li>
                     * @return Status 检测任务执行结果状态，分别为：
<li>Start: 任务开始</li>
<li>Success: 成功结束</li>
<li>Error: 异常</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置检测任务执行结果状态，分别为：
<li>Start: 任务开始</li>
<li>Success: 成功结束</li>
<li>Error: 异常</li>
                     * @param _status 检测任务执行结果状态，分别为：
<li>Start: 任务开始</li>
<li>Success: 成功结束</li>
<li>Error: 异常</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取提交检测的应用 ID
                     * @return BizId 提交检测的应用 ID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置提交检测的应用 ID
                     * @param _bizId 提交检测的应用 ID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                private:

                    /**
                     * 业务返回码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 数据唯一 ID
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 检测完成的时间戳
                     */
                    uint64_t m_scanFinishTime;
                    bool m_scanFinishTimeHasBeenSet;

                    /**
                     * 是否违规
                     */
                    bool m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 是否为流
                     */
                    bool m_live;
                    bool m_liveHasBeenSet;

                    /**
                     * 业务返回描述
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 检测结果，Code 为 0 时返回
                     */
                    std::vector<ScanPiece> m_scanPiece;
                    bool m_scanPieceHasBeenSet;

                    /**
                     * 提交检测的时间戳
                     */
                    uint64_t m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * 语音检测场景，对应请求时的 Scene
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * 语音检测任务 ID，由后台分配
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 文件或接流地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 检测任务执行结果状态，分别为：
<li>Start: 任务开始</li>
<li>Success: 成功结束</li>
<li>Error: 异常</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 提交检测的应用 ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULT_H_
