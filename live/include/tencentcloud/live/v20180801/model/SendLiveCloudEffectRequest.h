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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SENDLIVECLOUDEFFECTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SENDLIVECLOUDEFFECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * SendLiveCloudEffect请求参数结构体
                */
                class SendLiveCloudEffectRequest : public AbstractModel
                {
                public:
                    SendLiveCloudEffectRequest();
                    ~SendLiveCloudEffectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * @return AppName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * @param _appName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取您的推流域名。
                     * @return PushDomainName 您的推流域名。
                     * 
                     */
                    std::string GetPushDomainName() const;

                    /**
                     * 设置您的推流域名。
                     * @param _pushDomainName 您的推流域名。
                     * 
                     */
                    void SetPushDomainName(const std::string& _pushDomainName);

                    /**
                     * 判断参数 PushDomainName 是否已赋值
                     * @return PushDomainName 是否已赋值
                     * 
                     */
                    bool PushDomainNameHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取云端特效 ID。
                     * @return Id 云端特效 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置云端特效 ID。
                     * @param _id 云端特效 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取操作人备注信息。
                     * @return Operator 操作人备注信息。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人备注信息。
                     * @param _operator 操作人备注信息。
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
                     * 获取缩小比例，默认0 不缩放。
可选值：0-9， 值越大，越缩小。
                     * @return ZoomFactor 缩小比例，默认0 不缩放。
可选值：0-9， 值越大，越缩小。
                     * 
                     */
                    int64_t GetZoomFactor() const;

                    /**
                     * 设置缩小比例，默认0 不缩放。
可选值：0-9， 值越大，越缩小。
                     * @param _zoomFactor 缩小比例，默认0 不缩放。
可选值：0-9， 值越大，越缩小。
                     * 
                     */
                    void SetZoomFactor(const int64_t& _zoomFactor);

                    /**
                     * 判断参数 ZoomFactor 是否已赋值
                     * @return ZoomFactor 是否已赋值
                     * 
                     */
                    bool ZoomFactorHasBeenSet() const;

                    /**
                     * 获取指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的横向比例，可选值 0 - 100。
                     * @return XPosition 指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的横向比例，可选值 0 - 100。
                     * 
                     */
                    std::string GetXPosition() const;

                    /**
                     * 设置指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的横向比例，可选值 0 - 100。
                     * @param _xPosition 指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的横向比例，可选值 0 - 100。
                     * 
                     */
                    void SetXPosition(const std::string& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     * 
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的纵向比例，可选值 0 - 100。
                     * @return YPosition 指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的纵向比例，可选值 0 - 100。
                     * 
                     */
                    std::string GetYPosition() const;

                    /**
                     * 设置指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的纵向比例，可选值 0 - 100。
                     * @param _yPosition 指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的纵向比例，可选值 0 - 100。
                     * 
                     */
                    void SetYPosition(const std::string& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     * 
                     */
                    bool YPositionHasBeenSet() const;

                private:

                    /**
                     * 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 您的推流域名。
                     */
                    std::string m_pushDomainName;
                    bool m_pushDomainNameHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 云端特效 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 操作人备注信息。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 缩小比例，默认0 不缩放。
可选值：0-9， 值越大，越缩小。
                     */
                    int64_t m_zoomFactor;
                    bool m_zoomFactorHasBeenSet;

                    /**
                     * 指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的横向比例，可选值 0 - 100。
                     */
                    std::string m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * 指定云端特效渲染位置百分比。默认居中显示。
原点为画面左上角，该参数指定特效渲染离原点的纵向比例，可选值 0 - 100。
                     */
                    std::string m_yPosition;
                    bool m_yPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SENDLIVECLOUDEFFECTREQUEST_H_
