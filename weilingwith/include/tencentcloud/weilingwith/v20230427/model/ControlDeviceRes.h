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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICERES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICERES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备控制结果
                */
                class ControlDeviceRes : public AbstractModel
                {
                public:
                    ControlDeviceRes();
                    ~ControlDeviceRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备Id
                     * @return WID 设备Id
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备Id
                     * @param _wID 设备Id
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取指令接受, 0表示成功
                     * @return Code 指令接受, 0表示成功
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置指令接受, 0表示成功
                     * @param _code 指令接受, 0表示成功
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
                     * 获取控制结果
                     * @return Result 控制结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置控制结果
                     * @param _result 控制结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取批量大于1时，可用此seq进行链路追踪
                     * @return Seq 批量大于1时，可用此seq进行链路追踪
                     * 
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置批量大于1时，可用此seq进行链路追踪
                     * @param _seq 批量大于1时，可用此seq进行链路追踪
                     * 
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                private:

                    /**
                     * 设备Id
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 指令接受, 0表示成功
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 控制结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 批量大于1时，可用此seq进行链路追踪
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICERES_H_
