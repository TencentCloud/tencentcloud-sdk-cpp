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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_CREATEEDITINGTASKREQUEST_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_CREATEEDITINGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/EditingInfo.h>
#include <tencentcloud/ie/v20200304/model/DownInfo.h>
#include <tencentcloud/ie/v20200304/model/SaveInfo.h>
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
                * CreateEditingTask请求参数结构体
                */
                class CreateEditingTaskRequest : public AbstractModel
                {
                public:
                    CreateEditingTaskRequest();
                    ~CreateEditingTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取智能编辑任务参数。
                     * @return EditingInfo 智能编辑任务参数。
                     * 
                     */
                    EditingInfo GetEditingInfo() const;

                    /**
                     * 设置智能编辑任务参数。
                     * @param _editingInfo 智能编辑任务参数。
                     * 
                     */
                    void SetEditingInfo(const EditingInfo& _editingInfo);

                    /**
                     * 判断参数 EditingInfo 是否已赋值
                     * @return EditingInfo 是否已赋值
                     * 
                     */
                    bool EditingInfoHasBeenSet() const;

                    /**
                     * 获取视频源信息。
                     * @return DownInfo 视频源信息。
                     * 
                     */
                    DownInfo GetDownInfo() const;

                    /**
                     * 设置视频源信息。
                     * @param _downInfo 视频源信息。
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
                     * 获取结果存储信息。对于包含智能拆条、智能集锦或者智能封面的任务必选。
                     * @return SaveInfo 结果存储信息。对于包含智能拆条、智能集锦或者智能封面的任务必选。
                     * 
                     */
                    SaveInfo GetSaveInfo() const;

                    /**
                     * 设置结果存储信息。对于包含智能拆条、智能集锦或者智能封面的任务必选。
                     * @param _saveInfo 结果存储信息。对于包含智能拆条、智能集锦或者智能封面的任务必选。
                     * 
                     */
                    void SetSaveInfo(const SaveInfo& _saveInfo);

                    /**
                     * 判断参数 SaveInfo 是否已赋值
                     * @return SaveInfo 是否已赋值
                     * 
                     */
                    bool SaveInfoHasBeenSet() const;

                    /**
                     * 获取任务结果回调地址信息。
                     * @return CallbackInfo 任务结果回调地址信息。
                     * 
                     */
                    CallbackInfo GetCallbackInfo() const;

                    /**
                     * 设置任务结果回调地址信息。
                     * @param _callbackInfo 任务结果回调地址信息。
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
                     * 智能编辑任务参数。
                     */
                    EditingInfo m_editingInfo;
                    bool m_editingInfoHasBeenSet;

                    /**
                     * 视频源信息。
                     */
                    DownInfo m_downInfo;
                    bool m_downInfoHasBeenSet;

                    /**
                     * 结果存储信息。对于包含智能拆条、智能集锦或者智能封面的任务必选。
                     */
                    SaveInfo m_saveInfo;
                    bool m_saveInfoHasBeenSet;

                    /**
                     * 任务结果回调地址信息。
                     */
                    CallbackInfo m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_CREATEEDITINGTASKREQUEST_H_
