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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATISTICS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 拨测统计结果
                */
                class SpeedTestingStatistics : public AbstractModel
                {
                public:
                    SpeedTestingStatistics();
                    ~SpeedTestingStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取首屏时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstContentfulPaint 首屏时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirstContentfulPaint() const;

                    /**
                     * 设置首屏时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstContentfulPaint 首屏时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstContentfulPaint(const int64_t& _firstContentfulPaint);

                    /**
                     * 判断参数 FirstContentfulPaint 是否已赋值
                     * @return FirstContentfulPaint 是否已赋值
                     * 
                     */
                    bool FirstContentfulPaintHasBeenSet() const;

                    /**
                     * 获取首屏完全渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstMeaningfulPaint 首屏完全渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirstMeaningfulPaint() const;

                    /**
                     * 设置首屏完全渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstMeaningfulPaint 首屏完全渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstMeaningfulPaint(const int64_t& _firstMeaningfulPaint);

                    /**
                     * 判断参数 FirstMeaningfulPaint 是否已赋值
                     * @return FirstMeaningfulPaint 是否已赋值
                     * 
                     */
                    bool FirstMeaningfulPaintHasBeenSet() const;

                    /**
                     * 获取整体下载速度，单位 KB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OverallDownloadSpeed 整体下载速度，单位 KB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOverallDownloadSpeed() const;

                    /**
                     * 设置整体下载速度，单位 KB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _overallDownloadSpeed 整体下载速度，单位 KB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOverallDownloadSpeed(const double& _overallDownloadSpeed);

                    /**
                     * 判断参数 OverallDownloadSpeed 是否已赋值
                     * @return OverallDownloadSpeed 是否已赋值
                     * 
                     */
                    bool OverallDownloadSpeedHasBeenSet() const;

                    /**
                     * 获取渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenderTime 渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenderTime() const;

                    /**
                     * 设置渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renderTime 渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenderTime(const int64_t& _renderTime);

                    /**
                     * 判断参数 RenderTime 是否已赋值
                     * @return RenderTime 是否已赋值
                     * 
                     */
                    bool RenderTimeHasBeenSet() const;

                    /**
                     * 获取文档完成时间, 单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocumentFinishTime 文档完成时间, 单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDocumentFinishTime() const;

                    /**
                     * 设置文档完成时间, 单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _documentFinishTime 文档完成时间, 单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocumentFinishTime(const int64_t& _documentFinishTime);

                    /**
                     * 判断参数 DocumentFinishTime 是否已赋值
                     * @return DocumentFinishTime 是否已赋值
                     * 
                     */
                    bool DocumentFinishTimeHasBeenSet() const;

                    /**
                     * 获取基础文档TCP连接时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcpConnectionTime 基础文档TCP连接时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTcpConnectionTime() const;

                    /**
                     * 设置基础文档TCP连接时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcpConnectionTime 基础文档TCP连接时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcpConnectionTime(const int64_t& _tcpConnectionTime);

                    /**
                     * 判断参数 TcpConnectionTime 是否已赋值
                     * @return TcpConnectionTime 是否已赋值
                     * 
                     */
                    bool TcpConnectionTimeHasBeenSet() const;

                    /**
                     * 获取基础文档服务器响应时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseTime 基础文档服务器响应时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResponseTime() const;

                    /**
                     * 设置基础文档服务器响应时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseTime 基础文档服务器响应时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseTime(const int64_t& _responseTime);

                    /**
                     * 判断参数 ResponseTime 是否已赋值
                     * @return ResponseTime 是否已赋值
                     * 
                     */
                    bool ResponseTimeHasBeenSet() const;

                    /**
                     * 获取基础文档下载时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileDownloadTime 基础文档下载时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileDownloadTime() const;

                    /**
                     * 设置基础文档下载时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileDownloadTime 基础文档下载时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileDownloadTime(const int64_t& _fileDownloadTime);

                    /**
                     * 判断参数 FileDownloadTime 是否已赋值
                     * @return FileDownloadTime 是否已赋值
                     * 
                     */
                    bool FileDownloadTimeHasBeenSet() const;

                    /**
                     * 获取整体性能，测试总时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadTime 整体性能，测试总时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLoadTime() const;

                    /**
                     * 设置整体性能，测试总时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadTime 整体性能，测试总时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadTime(const int64_t& _loadTime);

                    /**
                     * 判断参数 LoadTime 是否已赋值
                     * @return LoadTime 是否已赋值
                     * 
                     */
                    bool LoadTimeHasBeenSet() const;

                private:

                    /**
                     * 首屏时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstContentfulPaint;
                    bool m_firstContentfulPaintHasBeenSet;

                    /**
                     * 首屏完全渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstMeaningfulPaint;
                    bool m_firstMeaningfulPaintHasBeenSet;

                    /**
                     * 整体下载速度，单位 KB/s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_overallDownloadSpeed;
                    bool m_overallDownloadSpeedHasBeenSet;

                    /**
                     * 渲染时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renderTime;
                    bool m_renderTimeHasBeenSet;

                    /**
                     * 文档完成时间, 单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_documentFinishTime;
                    bool m_documentFinishTimeHasBeenSet;

                    /**
                     * 基础文档TCP连接时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tcpConnectionTime;
                    bool m_tcpConnectionTimeHasBeenSet;

                    /**
                     * 基础文档服务器响应时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_responseTime;
                    bool m_responseTimeHasBeenSet;

                    /**
                     * 基础文档下载时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileDownloadTime;
                    bool m_fileDownloadTimeHasBeenSet;

                    /**
                     * 整体性能，测试总时间，单位 ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_loadTime;
                    bool m_loadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATISTICS_H_
