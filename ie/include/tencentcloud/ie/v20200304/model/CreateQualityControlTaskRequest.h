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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_CREATEQUALITYCONTROLTASKREQUEST_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_CREATEQUALITYCONTROLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/QualityControlInfo.h>
#include <tencentcloud/ie/v20200304/model/DownInfo.h>
#include <tencentcloud/ie/v20200304/model/CallbackInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * CreateQualityControlTask请求参数结构体
                */
                class CreateQualityControlTaskRequest : public AbstractModel
                {
                public:
                    CreateQualityControlTaskRequest();
                    ~CreateQualityControlTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取质检任务参数
                     * @return QualityControlInfo 质检任务参数
                     * 
                     */
                    QualityControlInfo GetQualityControlInfo() const;

                    /**
                     * 设置质检任务参数
                     * @param _qualityControlInfo 质检任务参数
                     * 
                     */
                    void SetQualityControlInfo(const QualityControlInfo& _qualityControlInfo);

                    /**
                     * 判断参数 QualityControlInfo 是否已赋值
                     * @return QualityControlInfo 是否已赋值
                     * 
                     */
                    bool QualityControlInfoHasBeenSet() const;

                    /**
                     * 获取视频源信息
                     * @return DownInfo 视频源信息
                     * 
                     */
                    DownInfo GetDownInfo() const;

                    /**
                     * 设置视频源信息
                     * @param _downInfo 视频源信息
                     * 
                     */
                    void SetDownInfo(const DownInfo& _downInfo);

                    /**
                     * 判断参数 DownInfo 是否已赋值
                     * @return DownInfo 是否已赋值
                     * 
                     */
                    bool DownInfoHasBeenSet() const;

                    /**
                     * 获取任务结果回调地址信息
                     * @return CallbackInfo 任务结果回调地址信息
                     * 
                     */
                    CallbackInfo GetCallbackInfo() const;

                    /**
                     * 设置任务结果回调地址信息
                     * @param _callbackInfo 任务结果回调地址信息
                     * 
                     */
                    void SetCallbackInfo(const CallbackInfo& _callbackInfo);

                    /**
                     * 判断参数 CallbackInfo 是否已赋值
                     * @return CallbackInfo 是否已赋值
                     * 
                     */
                    bool CallbackInfoHasBeenSet() const;

                private:

                    /**
                     * 质检任务参数
                     */
                    QualityControlInfo m_qualityControlInfo;
                    bool m_qualityControlInfoHasBeenSet;

                    /**
                     * 视频源信息
                     */
                    DownInfo m_downInfo;
                    bool m_downInfoHasBeenSet;

                    /**
                     * 任务结果回调地址信息
                     */
                    CallbackInfo m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_CREATEQUALITYCONTROLTASKREQUEST_H_
