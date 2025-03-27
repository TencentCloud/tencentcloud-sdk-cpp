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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskStreamPara.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 自适应码流任务的输入参数。
                */
                class ComplexAdaptiveDynamicStreamingTaskInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskInput();
                    ~ComplexAdaptiveDynamicStreamingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自适应码流参数。
                     * @return StreamPara 自适应码流参数。
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTaskStreamPara GetStreamPara() const;

                    /**
                     * 设置自适应码流参数。
                     * @param _streamPara 自适应码流参数。
                     * 
                     */
                    void SetStreamPara(const ComplexAdaptiveDynamicStreamingTaskStreamPara& _streamPara);

                    /**
                     * 判断参数 StreamPara 是否已赋值
                     * @return StreamPara 是否已赋值
                     * 
                     */
                    bool StreamParaHasBeenSet() const;

                private:

                    /**
                     * 自适应码流参数。
                     */
                    ComplexAdaptiveDynamicStreamingTaskStreamPara m_streamPara;
                    bool m_streamParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
