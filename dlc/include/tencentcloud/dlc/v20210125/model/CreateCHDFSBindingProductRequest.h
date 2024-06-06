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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATECHDFSBINDINGPRODUCTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATECHDFSBINDINGPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/VpcInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateCHDFSBindingProduct请求参数结构体
                */
                class CreateCHDFSBindingProductRequest : public AbstractModel
                {
                public:
                    CreateCHDFSBindingProductRequest();
                    ~CreateCHDFSBindingProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要绑定的元数据加速桶名
                     * @return MountPoint 需要绑定的元数据加速桶名
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置需要绑定的元数据加速桶名
                     * @param _mountPoint 需要绑定的元数据加速桶名
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取桶的类型，分为cos和lakefs
                     * @return BucketType 桶的类型，分为cos和lakefs
                     * 
                     */
                    std::string GetBucketType() const;

                    /**
                     * 设置桶的类型，分为cos和lakefs
                     * @param _bucketType 桶的类型，分为cos和lakefs
                     * 
                     */
                    void SetBucketType(const std::string& _bucketType);

                    /**
                     * 判断参数 BucketType 是否已赋值
                     * @return BucketType 是否已赋值
                     * 
                     */
                    bool BucketTypeHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取引擎名称，ProductName选择DLC产品时，必传此参数。其他产品可不传
                     * @return EngineName 引擎名称，ProductName选择DLC产品时，必传此参数。其他产品可不传
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎名称，ProductName选择DLC产品时，必传此参数。其他产品可不传
                     * @param _engineName 引擎名称，ProductName选择DLC产品时，必传此参数。其他产品可不传
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取vpc信息，产品名称为other时必传此参数
                     * @return VpcInfo vpc信息，产品名称为other时必传此参数
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfo() const;

                    /**
                     * 设置vpc信息，产品名称为other时必传此参数
                     * @param _vpcInfo vpc信息，产品名称为other时必传此参数
                     * 
                     */
                    void SetVpcInfo(const std::vector<VpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                private:

                    /**
                     * 需要绑定的元数据加速桶名
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * 桶的类型，分为cos和lakefs
                     */
                    std::string m_bucketType;
                    bool m_bucketTypeHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 引擎名称，ProductName选择DLC产品时，必传此参数。其他产品可不传
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * vpc信息，产品名称为other时必传此参数
                     */
                    std::vector<VpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATECHDFSBINDINGPRODUCTREQUEST_H_
