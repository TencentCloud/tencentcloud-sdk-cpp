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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEVICENETINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEVICENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例所在物理机网络监控信息
                */
                class DeviceNetInfo : public AbstractModel
                {
                public:
                    DeviceNetInfo();
                    ~DeviceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tcp连接数
                     * @return Conn tcp连接数
                     * 
                     */
                    std::vector<int64_t> GetConn() const;

                    /**
                     * 设置tcp连接数
                     * @param _conn tcp连接数
                     * 
                     */
                    void SetConn(const std::vector<int64_t>& _conn);

                    /**
                     * 判断参数 Conn 是否已赋值
                     * @return Conn 是否已赋值
                     * 
                     */
                    bool ConnHasBeenSet() const;

                    /**
                     * 获取网卡入包量，单位：个/秒
                     * @return PackageIn 网卡入包量，单位：个/秒
                     * 
                     */
                    std::vector<int64_t> GetPackageIn() const;

                    /**
                     * 设置网卡入包量，单位：个/秒
                     * @param _packageIn 网卡入包量，单位：个/秒
                     * 
                     */
                    void SetPackageIn(const std::vector<int64_t>& _packageIn);

                    /**
                     * 判断参数 PackageIn 是否已赋值
                     * @return PackageIn 是否已赋值
                     * 
                     */
                    bool PackageInHasBeenSet() const;

                    /**
                     * 获取网卡出包量，单位：个/秒
                     * @return PackageOut 网卡出包量，单位：个/秒
                     * 
                     */
                    std::vector<int64_t> GetPackageOut() const;

                    /**
                     * 设置网卡出包量，单位：个/秒
                     * @param _packageOut 网卡出包量，单位：个/秒
                     * 
                     */
                    void SetPackageOut(const std::vector<int64_t>& _packageOut);

                    /**
                     * 判断参数 PackageOut 是否已赋值
                     * @return PackageOut 是否已赋值
                     * 
                     */
                    bool PackageOutHasBeenSet() const;

                    /**
                     * 获取入流量，单位：kbps
                     * @return FlowIn 入流量，单位：kbps
                     * 
                     */
                    std::vector<int64_t> GetFlowIn() const;

                    /**
                     * 设置入流量，单位：kbps
                     * @param _flowIn 入流量，单位：kbps
                     * 
                     */
                    void SetFlowIn(const std::vector<int64_t>& _flowIn);

                    /**
                     * 判断参数 FlowIn 是否已赋值
                     * @return FlowIn 是否已赋值
                     * 
                     */
                    bool FlowInHasBeenSet() const;

                    /**
                     * 获取出流量，单位：kbps
                     * @return FlowOut 出流量，单位：kbps
                     * 
                     */
                    std::vector<int64_t> GetFlowOut() const;

                    /**
                     * 设置出流量，单位：kbps
                     * @param _flowOut 出流量，单位：kbps
                     * 
                     */
                    void SetFlowOut(const std::vector<int64_t>& _flowOut);

                    /**
                     * 判断参数 FlowOut 是否已赋值
                     * @return FlowOut 是否已赋值
                     * 
                     */
                    bool FlowOutHasBeenSet() const;

                private:

                    /**
                     * tcp连接数
                     */
                    std::vector<int64_t> m_conn;
                    bool m_connHasBeenSet;

                    /**
                     * 网卡入包量，单位：个/秒
                     */
                    std::vector<int64_t> m_packageIn;
                    bool m_packageInHasBeenSet;

                    /**
                     * 网卡出包量，单位：个/秒
                     */
                    std::vector<int64_t> m_packageOut;
                    bool m_packageOutHasBeenSet;

                    /**
                     * 入流量，单位：kbps
                     */
                    std::vector<int64_t> m_flowIn;
                    bool m_flowInHasBeenSet;

                    /**
                     * 出流量，单位：kbps
                     */
                    std::vector<int64_t> m_flowOut;
                    bool m_flowOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEVICENETINFO_H_
