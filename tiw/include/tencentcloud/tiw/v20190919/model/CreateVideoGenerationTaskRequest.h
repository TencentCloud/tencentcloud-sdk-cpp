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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEVIDEOGENERATIONTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEVIDEOGENERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/Concat.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>
#include <tencentcloud/tiw/v20190919/model/RecordControl.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateVideoGenerationTask请求参数结构体
                */
                class CreateVideoGenerationTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoGenerationTaskRequest();
                    ~CreateVideoGenerationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实时录制任务的TaskId
                     * @return OnlineRecordTaskId 实时录制任务的TaskId
                     * 
                     */
                    std::string GetOnlineRecordTaskId() const;

                    /**
                     * 设置实时录制任务的TaskId
                     * @param _onlineRecordTaskId 实时录制任务的TaskId
                     * 
                     */
                    void SetOnlineRecordTaskId(const std::string& _onlineRecordTaskId);

                    /**
                     * 判断参数 OnlineRecordTaskId 是否已赋值
                     * @return OnlineRecordTaskId 是否已赋值
                     * 
                     */
                    bool OnlineRecordTaskIdHasBeenSet() const;

                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param _sdkAppId 客户的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取视频生成的白板参数，例如白板宽高等。

此参数与开始录制接口提供的Whiteboard参数互斥，在本接口与开始录制接口都提供了Whiteboard参数时，优先使用本接口指定的Whiteboard参数进行视频生成，否则使用开始录制接口提供的Whiteboard参数进行视频生成。
                     * @return Whiteboard 视频生成的白板参数，例如白板宽高等。

此参数与开始录制接口提供的Whiteboard参数互斥，在本接口与开始录制接口都提供了Whiteboard参数时，优先使用本接口指定的Whiteboard参数进行视频生成，否则使用开始录制接口提供的Whiteboard参数进行视频生成。
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置视频生成的白板参数，例如白板宽高等。

此参数与开始录制接口提供的Whiteboard参数互斥，在本接口与开始录制接口都提供了Whiteboard参数时，优先使用本接口指定的Whiteboard参数进行视频生成，否则使用开始录制接口提供的Whiteboard参数进行视频生成。
                     * @param _whiteboard 视频生成的白板参数，例如白板宽高等。

此参数与开始录制接口提供的Whiteboard参数互斥，在本接口与开始录制接口都提供了Whiteboard参数时，优先使用本接口指定的Whiteboard参数进行视频生成，否则使用开始录制接口提供的Whiteboard参数进行视频生成。
                     * 
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取视频拼接参数

此参数与开始录制接口提供的Concat参数互斥，在本接口与开始录制接口都提供了Concat参数时，优先使用本接口指定的Concat参数进行视频拼接，否则使用开始录制接口提供的Concat参数进行视频拼接。
                     * @return Concat 视频拼接参数

此参数与开始录制接口提供的Concat参数互斥，在本接口与开始录制接口都提供了Concat参数时，优先使用本接口指定的Concat参数进行视频拼接，否则使用开始录制接口提供的Concat参数进行视频拼接。
                     * 
                     */
                    Concat GetConcat() const;

                    /**
                     * 设置视频拼接参数

此参数与开始录制接口提供的Concat参数互斥，在本接口与开始录制接口都提供了Concat参数时，优先使用本接口指定的Concat参数进行视频拼接，否则使用开始录制接口提供的Concat参数进行视频拼接。
                     * @param _concat 视频拼接参数

此参数与开始录制接口提供的Concat参数互斥，在本接口与开始录制接口都提供了Concat参数时，优先使用本接口指定的Concat参数进行视频拼接，否则使用开始录制接口提供的Concat参数进行视频拼接。
                     * 
                     */
                    void SetConcat(const Concat& _concat);

                    /**
                     * 判断参数 Concat 是否已赋值
                     * @return Concat 是否已赋值
                     * 
                     */
                    bool ConcatHasBeenSet() const;

                    /**
                     * 获取视频生成混流参数

此参数与开始录制接口提供的MixStream参数互斥，在本接口与开始录制接口都提供了MixStream参数时，优先使用本接口指定的MixStream参数进行视频混流，否则使用开始录制接口提供的MixStream参数进行视频拼混流。
                     * @return MixStream 视频生成混流参数

此参数与开始录制接口提供的MixStream参数互斥，在本接口与开始录制接口都提供了MixStream参数时，优先使用本接口指定的MixStream参数进行视频混流，否则使用开始录制接口提供的MixStream参数进行视频拼混流。
                     * 
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置视频生成混流参数

此参数与开始录制接口提供的MixStream参数互斥，在本接口与开始录制接口都提供了MixStream参数时，优先使用本接口指定的MixStream参数进行视频混流，否则使用开始录制接口提供的MixStream参数进行视频拼混流。
                     * @param _mixStream 视频生成混流参数

此参数与开始录制接口提供的MixStream参数互斥，在本接口与开始录制接口都提供了MixStream参数时，优先使用本接口指定的MixStream参数进行视频混流，否则使用开始录制接口提供的MixStream参数进行视频拼混流。
                     * 
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     * 
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取视频生成控制参数，用于更精细地指定需要生成哪些流，某一路流是否禁用音频，是否只录制小画面等

此参数与开始录制接口提供的RecordControl参数互斥，在本接口与开始录制接口都提供了RecordControl参数时，优先使用本接口指定的RecordControl参数进行视频生成控制，否则使用开始录制接口提供的RecordControl参数进行视频拼生成控制。
                     * @return RecordControl 视频生成控制参数，用于更精细地指定需要生成哪些流，某一路流是否禁用音频，是否只录制小画面等

此参数与开始录制接口提供的RecordControl参数互斥，在本接口与开始录制接口都提供了RecordControl参数时，优先使用本接口指定的RecordControl参数进行视频生成控制，否则使用开始录制接口提供的RecordControl参数进行视频拼生成控制。
                     * 
                     */
                    RecordControl GetRecordControl() const;

                    /**
                     * 设置视频生成控制参数，用于更精细地指定需要生成哪些流，某一路流是否禁用音频，是否只录制小画面等

此参数与开始录制接口提供的RecordControl参数互斥，在本接口与开始录制接口都提供了RecordControl参数时，优先使用本接口指定的RecordControl参数进行视频生成控制，否则使用开始录制接口提供的RecordControl参数进行视频拼生成控制。
                     * @param _recordControl 视频生成控制参数，用于更精细地指定需要生成哪些流，某一路流是否禁用音频，是否只录制小画面等

此参数与开始录制接口提供的RecordControl参数互斥，在本接口与开始录制接口都提供了RecordControl参数时，优先使用本接口指定的RecordControl参数进行视频生成控制，否则使用开始录制接口提供的RecordControl参数进行视频拼生成控制。
                     * 
                     */
                    void SetRecordControl(const RecordControl& _recordControl);

                    /**
                     * 判断参数 RecordControl 是否已赋值
                     * @return RecordControl 是否已赋值
                     * 
                     */
                    bool RecordControlHasBeenSet() const;

                    /**
                     * 获取内部参数
                     * @return ExtraData 内部参数
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置内部参数
                     * @param _extraData 内部参数
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * 实时录制任务的TaskId
                     */
                    std::string m_onlineRecordTaskId;
                    bool m_onlineRecordTaskIdHasBeenSet;

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 视频生成的白板参数，例如白板宽高等。

此参数与开始录制接口提供的Whiteboard参数互斥，在本接口与开始录制接口都提供了Whiteboard参数时，优先使用本接口指定的Whiteboard参数进行视频生成，否则使用开始录制接口提供的Whiteboard参数进行视频生成。
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * 视频拼接参数

此参数与开始录制接口提供的Concat参数互斥，在本接口与开始录制接口都提供了Concat参数时，优先使用本接口指定的Concat参数进行视频拼接，否则使用开始录制接口提供的Concat参数进行视频拼接。
                     */
                    Concat m_concat;
                    bool m_concatHasBeenSet;

                    /**
                     * 视频生成混流参数

此参数与开始录制接口提供的MixStream参数互斥，在本接口与开始录制接口都提供了MixStream参数时，优先使用本接口指定的MixStream参数进行视频混流，否则使用开始录制接口提供的MixStream参数进行视频拼混流。
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * 视频生成控制参数，用于更精细地指定需要生成哪些流，某一路流是否禁用音频，是否只录制小画面等

此参数与开始录制接口提供的RecordControl参数互斥，在本接口与开始录制接口都提供了RecordControl参数时，优先使用本接口指定的RecordControl参数进行视频生成控制，否则使用开始录制接口提供的RecordControl参数进行视频拼生成控制。
                     */
                    RecordControl m_recordControl;
                    bool m_recordControlHasBeenSet;

                    /**
                     * 内部参数
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEVIDEOGENERATIONTASKREQUEST_H_
