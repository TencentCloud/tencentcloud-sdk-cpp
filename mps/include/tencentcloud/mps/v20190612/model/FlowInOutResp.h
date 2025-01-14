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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWINOUTRESP_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWINOUTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询Flow的配置信息。
                */
                class FlowInOutResp : public AbstractModel
                {
                public:
                    FlowInOutResp();
                    ~FlowInOutResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流Id。
                     * @return FlowId 流Id。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流Id。
                     * @param _flowId 流Id。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return FlowName 流名称。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流名称。
                     * @param _flowName 流名称。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取该Flow关联的媒体传输事件EventId。
                     * @return EventId 该Flow关联的媒体传输事件EventId。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置该Flow关联的媒体传输事件EventId。
                     * @param _eventId 该Flow关联的媒体传输事件EventId。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取媒体传输输入流所属的区域，取值和InputRegion相同。
                     * @return FlowRegion 媒体传输输入流所属的区域，取值和InputRegion相同。
                     * 
                     */
                    std::string GetFlowRegion() const;

                    /**
                     * 设置媒体传输输入流所属的区域，取值和InputRegion相同。
                     * @param _flowRegion 媒体传输输入流所属的区域，取值和InputRegion相同。
                     * 
                     */
                    void SetFlowRegion(const std::string& _flowRegion);

                    /**
                     * 判断参数 FlowRegion 是否已赋值
                     * @return FlowRegion 是否已赋值
                     * 
                     */
                    bool FlowRegionHasBeenSet() const;

                    /**
                     * 获取当返回是输出类型时非空，output所在Region。
                     * @return OutputRegion 当返回是输出类型时非空，output所在Region。
                     * 
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置当返回是输出类型时非空，output所在Region。
                     * @param _outputRegion 当返回是输出类型时非空，output所在Region。
                     * 
                     */
                    void SetOutputRegion(const std::string& _outputRegion);

                    /**
                     * 判断参数 OutputRegion 是否已赋值
                     * @return OutputRegion 是否已赋值
                     * 
                     */
                    bool OutputRegionHasBeenSet() const;

                    /**
                     * 获取EventName。
                     * @return EventName EventName。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置EventName。
                     * @param _eventName EventName。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取InOutType为Input有效。
                     * @return InputName InOutType为Input有效。
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置InOutType为Input有效。
                     * @param _inputName InOutType为Input有效。
                     * 
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     * 
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取InOutType为Output有效。
                     * @return OutputName InOutType为Output有效。
                     * 
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置InOutType为Output有效。
                     * @param _outputName InOutType为Output有效。
                     * 
                     */
                    void SetOutputName(const std::string& _outputName);

                    /**
                     * 判断参数 OutputName 是否已赋值
                     * @return OutputName 是否已赋值
                     * 
                     */
                    bool OutputNameHasBeenSet() const;

                    /**
                     * 获取Input或者Output的Id。
                     * @return InOutId Input或者Output的Id。
                     * 
                     */
                    std::string GetInOutId() const;

                    /**
                     * 设置Input或者Output的Id。
                     * @param _inOutId Input或者Output的Id。
                     * 
                     */
                    void SetInOutId(const std::string& _inOutId);

                    /**
                     * 判断参数 InOutId 是否已赋值
                     * @return InOutId 是否已赋值
                     * 
                     */
                    bool InOutIdHasBeenSet() const;

                    /**
                     * 获取输入/输出类型，可选值：
Input：输入
Outpu：输出。
                     * @return InOutType 输入/输出类型，可选值：
Input：输入
Outpu：输出。
                     * 
                     */
                    std::string GetInOutType() const;

                    /**
                     * 设置输入/输出类型，可选值：
Input：输入
Outpu：输出。
                     * @param _inOutType 输入/输出类型，可选值：
Input：输入
Outpu：输出。
                     * 
                     */
                    void SetInOutType(const std::string& _inOutType);

                    /**
                     * 判断参数 InOutType 是否已赋值
                     * @return InOutType 是否已赋值
                     * 
                     */
                    bool InOutTypeHasBeenSet() const;

                private:

                    /**
                     * 流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 该Flow关联的媒体传输事件EventId。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 媒体传输输入流所属的区域，取值和InputRegion相同。
                     */
                    std::string m_flowRegion;
                    bool m_flowRegionHasBeenSet;

                    /**
                     * 当返回是输出类型时非空，output所在Region。
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * EventName。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * InOutType为Input有效。
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * InOutType为Output有效。
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * Input或者Output的Id。
                     */
                    std::string m_inOutId;
                    bool m_inOutIdHasBeenSet;

                    /**
                     * 输入/输出类型，可选值：
Input：输入
Outpu：输出。
                     */
                    std::string m_inOutType;
                    bool m_inOutTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWINOUTRESP_H_
