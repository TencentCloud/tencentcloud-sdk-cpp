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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPRESETREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPRESETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ControlDevicePreset请求参数结构体
                */
                class ControlDevicePresetRequest : public AbstractModel
                {
                public:
                    ControlDevicePresetRequest();
                    ~ControlDevicePresetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @return ChannelId 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @param _channelId 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取命令（goto:预置位调用；
set:预置位设置；
del:预置位删除）
                     * @return Cmd 命令（goto:预置位调用；
set:预置位设置；
del:预置位删除）
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令（goto:预置位调用；
set:预置位设置；
del:预置位删除）
                     * @param _cmd 命令（goto:预置位调用；
set:预置位设置；
del:预置位删除）
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取预置位索引（只支持1-10的索引位置，超出报错）
                     * @return Index 预置位索引（只支持1-10的索引位置，超出报错）
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置预置位索引（只支持1-10的索引位置，超出报错）
                     * @param _index 预置位索引（只支持1-10的索引位置，超出报错）
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 命令（goto:预置位调用；
set:预置位设置；
del:预置位删除）
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 预置位索引（只支持1-10的索引位置，超出报错）
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPRESETREQUEST_H_
