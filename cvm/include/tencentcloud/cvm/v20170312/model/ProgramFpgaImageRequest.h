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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PROGRAMFPGAIMAGEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PROGRAMFPGAIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ProgramFpgaImage请求参数结构体
                */
                class ProgramFpgaImageRequest : public AbstractModel
                {
                public:
                    ProgramFpgaImageRequest();
                    ~ProgramFpgaImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的ID信息。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @return InstanceId 实例的ID信息。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例的ID信息。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @param _instanceId 实例的ID信息。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取FPGA镜像文件的COS URL地址。
                     * @return FPGAUrl FPGA镜像文件的COS URL地址。
                     * 
                     */
                    std::string GetFPGAUrl() const;

                    /**
                     * 设置FPGA镜像文件的COS URL地址。
                     * @param _fPGAUrl FPGA镜像文件的COS URL地址。
                     * 
                     */
                    void SetFPGAUrl(const std::string& _fPGAUrl);

                    /**
                     * 判断参数 FPGAUrl 是否已赋值
                     * @return FPGAUrl 是否已赋值
                     * 
                     */
                    bool FPGAUrlHasBeenSet() const;

                    /**
                     * 获取实例上FPGA卡的DBDF号，不填默认烧录FPGA镜像到实例所拥有的所有FPGA卡。
                     * @return DBDFs 实例上FPGA卡的DBDF号，不填默认烧录FPGA镜像到实例所拥有的所有FPGA卡。
                     * 
                     */
                    std::vector<std::string> GetDBDFs() const;

                    /**
                     * 设置实例上FPGA卡的DBDF号，不填默认烧录FPGA镜像到实例所拥有的所有FPGA卡。
                     * @param _dBDFs 实例上FPGA卡的DBDF号，不填默认烧录FPGA镜像到实例所拥有的所有FPGA卡。
                     * 
                     */
                    void SetDBDFs(const std::vector<std::string>& _dBDFs);

                    /**
                     * 判断参数 DBDFs 是否已赋值
                     * @return DBDFs 是否已赋值
                     * 
                     */
                    bool DBDFsHasBeenSet() const;

                    /**
                     * 获取试运行，不会执行实际的烧录动作，默认为False。
                     * @return DryRun 试运行，不会执行实际的烧录动作，默认为False。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置试运行，不会执行实际的烧录动作，默认为False。
                     * @param _dryRun 试运行，不会执行实际的烧录动作，默认为False。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 实例的ID信息。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * FPGA镜像文件的COS URL地址。
                     */
                    std::string m_fPGAUrl;
                    bool m_fPGAUrlHasBeenSet;

                    /**
                     * 实例上FPGA卡的DBDF号，不填默认烧录FPGA镜像到实例所拥有的所有FPGA卡。
                     */
                    std::vector<std::string> m_dBDFs;
                    bool m_dBDFsHasBeenSet;

                    /**
                     * 试运行，不会执行实际的烧录动作，默认为False。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PROGRAMFPGAIMAGEREQUEST_H_
