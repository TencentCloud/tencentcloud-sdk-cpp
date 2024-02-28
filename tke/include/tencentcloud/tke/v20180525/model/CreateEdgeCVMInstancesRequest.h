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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGECVMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGECVMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateEdgeCVMInstances请求参数结构体
                */
                class CreateEdgeCVMInstancesRequest : public AbstractModel
                {
                public:
                    CreateEdgeCVMInstancesRequest();
                    ~CreateEdgeCVMInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id，边缘集群需要先开启公网访问才能添加cvm节点
                     * @return ClusterID 集群id，边缘集群需要先开启公网访问才能添加cvm节点
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群id，边缘集群需要先开启公网访问才能添加cvm节点
                     * @param _clusterID 集群id，边缘集群需要先开启公网访问才能添加cvm节点
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * @return RunInstancePara CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * 
                     */
                    std::string GetRunInstancePara() const;

                    /**
                     * 设置CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * @param _runInstancePara CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     * 
                     */
                    void SetRunInstancePara(const std::string& _runInstancePara);

                    /**
                     * 判断参数 RunInstancePara 是否已赋值
                     * @return RunInstancePara 是否已赋值
                     * 
                     */
                    bool RunInstanceParaHasBeenSet() const;

                    /**
                     * 获取CVM所属Region
                     * @return CvmRegion CVM所属Region
                     * 
                     */
                    std::string GetCvmRegion() const;

                    /**
                     * 设置CVM所属Region
                     * @param _cvmRegion CVM所属Region
                     * 
                     */
                    void SetCvmRegion(const std::string& _cvmRegion);

                    /**
                     * 判断参数 CvmRegion 是否已赋值
                     * @return CvmRegion 是否已赋值
                     * 
                     */
                    bool CvmRegionHasBeenSet() const;

                    /**
                     * 获取CVM数量
                     * @return CvmCount CVM数量
                     * 
                     */
                    int64_t GetCvmCount() const;

                    /**
                     * 设置CVM数量
                     * @param _cvmCount CVM数量
                     * 
                     */
                    void SetCvmCount(const int64_t& _cvmCount);

                    /**
                     * 判断参数 CvmCount 是否已赋值
                     * @return CvmCount 是否已赋值
                     * 
                     */
                    bool CvmCountHasBeenSet() const;

                    /**
                     * 获取实例扩展信息
                     * @return External 实例扩展信息
                     * 
                     */
                    std::string GetExternal() const;

                    /**
                     * 设置实例扩展信息
                     * @param _external 实例扩展信息
                     * 
                     */
                    void SetExternal(const std::string& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                    /**
                     * 获取用户自定义脚本
                     * @return UserScript 用户自定义脚本
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置用户自定义脚本
                     * @param _userScript 用户自定义脚本
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取是否开启弹性网卡功能
                     * @return EnableEni 是否开启弹性网卡功能
                     * 
                     */
                    bool GetEnableEni() const;

                    /**
                     * 设置是否开启弹性网卡功能
                     * @param _enableEni 是否开启弹性网卡功能
                     * 
                     */
                    void SetEnableEni(const bool& _enableEni);

                    /**
                     * 判断参数 EnableEni 是否已赋值
                     * @return EnableEni 是否已赋值
                     * 
                     */
                    bool EnableEniHasBeenSet() const;

                private:

                    /**
                     * 集群id，边缘集群需要先开启公网访问才能添加cvm节点
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * CVM创建透传参数，json化字符串格式，如需要保证扩展集群节点请求幂等性需要在此参数添加ClientToken字段，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。
                     */
                    std::string m_runInstancePara;
                    bool m_runInstanceParaHasBeenSet;

                    /**
                     * CVM所属Region
                     */
                    std::string m_cvmRegion;
                    bool m_cvmRegionHasBeenSet;

                    /**
                     * CVM数量
                     */
                    int64_t m_cvmCount;
                    bool m_cvmCountHasBeenSet;

                    /**
                     * 实例扩展信息
                     */
                    std::string m_external;
                    bool m_externalHasBeenSet;

                    /**
                     * 用户自定义脚本
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * 是否开启弹性网卡功能
                     */
                    bool m_enableEni;
                    bool m_enableEniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGECVMINSTANCESREQUEST_H_
