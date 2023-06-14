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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 没有店铺信息的网络状态
                */
                class NetworkInfo : public AbstractModel
                {
                public:
                    NetworkInfo();
                    ~NetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传带宽，单位Mb/s，-1：未知
                     * @return Upload 上传带宽，单位Mb/s，-1：未知
                     * 
                     */
                    double GetUpload() const;

                    /**
                     * 设置上传带宽，单位Mb/s，-1：未知
                     * @param _upload 上传带宽，单位Mb/s，-1：未知
                     * 
                     */
                    void SetUpload(const double& _upload);

                    /**
                     * 判断参数 Upload 是否已赋值
                     * @return Upload 是否已赋值
                     * 
                     */
                    bool UploadHasBeenSet() const;

                    /**
                     * 获取下载带宽，单位Mb/s，-1：未知
                     * @return Download 下载带宽，单位Mb/s，-1：未知
                     * 
                     */
                    double GetDownload() const;

                    /**
                     * 设置下载带宽，单位Mb/s，-1：未知
                     * @param _download 下载带宽，单位Mb/s，-1：未知
                     * 
                     */
                    void SetDownload(const double& _download);

                    /**
                     * 判断参数 Download 是否已赋值
                     * @return Download 是否已赋值
                     * 
                     */
                    bool DownloadHasBeenSet() const;

                    /**
                     * 获取最小延迟，单位ms，-1：未知
                     * @return MinRtt 最小延迟，单位ms，-1：未知
                     * 
                     */
                    double GetMinRtt() const;

                    /**
                     * 设置最小延迟，单位ms，-1：未知
                     * @param _minRtt 最小延迟，单位ms，-1：未知
                     * 
                     */
                    void SetMinRtt(const double& _minRtt);

                    /**
                     * 判断参数 MinRtt 是否已赋值
                     * @return MinRtt 是否已赋值
                     * 
                     */
                    bool MinRttHasBeenSet() const;

                    /**
                     * 获取平均延迟，单位ms，-1：未知
                     * @return AvgRtt 平均延迟，单位ms，-1：未知
                     * 
                     */
                    double GetAvgRtt() const;

                    /**
                     * 设置平均延迟，单位ms，-1：未知
                     * @param _avgRtt 平均延迟，单位ms，-1：未知
                     * 
                     */
                    void SetAvgRtt(const double& _avgRtt);

                    /**
                     * 判断参数 AvgRtt 是否已赋值
                     * @return AvgRtt 是否已赋值
                     * 
                     */
                    bool AvgRttHasBeenSet() const;

                    /**
                     * 获取最大延迟，单位ms，-1：未知
                     * @return MaxRtt 最大延迟，单位ms，-1：未知
                     * 
                     */
                    double GetMaxRtt() const;

                    /**
                     * 设置最大延迟，单位ms，-1：未知
                     * @param _maxRtt 最大延迟，单位ms，-1：未知
                     * 
                     */
                    void SetMaxRtt(const double& _maxRtt);

                    /**
                     * 判断参数 MaxRtt 是否已赋值
                     * @return MaxRtt 是否已赋值
                     * 
                     */
                    bool MaxRttHasBeenSet() const;

                    /**
                     * 获取平均偏差延迟，单位ms，-1：未知
                     * @return MdevRtt 平均偏差延迟，单位ms，-1：未知
                     * 
                     */
                    double GetMdevRtt() const;

                    /**
                     * 设置平均偏差延迟，单位ms，-1：未知
                     * @param _mdevRtt 平均偏差延迟，单位ms，-1：未知
                     * 
                     */
                    void SetMdevRtt(const double& _mdevRtt);

                    /**
                     * 判断参数 MdevRtt 是否已赋值
                     * @return MdevRtt 是否已赋值
                     * 
                     */
                    bool MdevRttHasBeenSet() const;

                    /**
                     * 获取丢包率百分比，-1：未知
                     * @return Loss 丢包率百分比，-1：未知
                     * 
                     */
                    double GetLoss() const;

                    /**
                     * 设置丢包率百分比，-1：未知
                     * @param _loss 丢包率百分比，-1：未知
                     * 
                     */
                    void SetLoss(const double& _loss);

                    /**
                     * 判断参数 Loss 是否已赋值
                     * @return Loss 是否已赋值
                     * 
                     */
                    bool LossHasBeenSet() const;

                    /**
                     * 获取更新时间戳
                     * @return UpdateTime 更新时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳
                     * @param _updateTime 更新时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取上报网络状态设备
                     * @return Mac 上报网络状态设备
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置上报网络状态设备
                     * @param _mac 上报网络状态设备
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                private:

                    /**
                     * 上传带宽，单位Mb/s，-1：未知
                     */
                    double m_upload;
                    bool m_uploadHasBeenSet;

                    /**
                     * 下载带宽，单位Mb/s，-1：未知
                     */
                    double m_download;
                    bool m_downloadHasBeenSet;

                    /**
                     * 最小延迟，单位ms，-1：未知
                     */
                    double m_minRtt;
                    bool m_minRttHasBeenSet;

                    /**
                     * 平均延迟，单位ms，-1：未知
                     */
                    double m_avgRtt;
                    bool m_avgRttHasBeenSet;

                    /**
                     * 最大延迟，单位ms，-1：未知
                     */
                    double m_maxRtt;
                    bool m_maxRttHasBeenSet;

                    /**
                     * 平均偏差延迟，单位ms，-1：未知
                     */
                    double m_mdevRtt;
                    bool m_mdevRttHasBeenSet;

                    /**
                     * 丢包率百分比，-1：未知
                     */
                    double m_loss;
                    bool m_lossHasBeenSet;

                    /**
                     * 更新时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 上报网络状态设备
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKINFO_H_
