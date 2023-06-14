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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEASSETSYSTEMSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEASSETSYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeAssetSystems请求参数结构体
                */
                class DescribeAssetSystemsRequest : public AbstractModel
                {
                public:
                    DescribeAssetSystemsRequest();
                    ~DescribeAssetSystemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包支持的操作系统类型
                     * @return OsType 生成包支持的操作系统类型
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置生成包支持的操作系统类型
                     * @param _osType 生成包支持的操作系统类型
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取生成包支持的操作系统位数
                     * @return OsBit 生成包支持的操作系统位数
                     * 
                     */
                    int64_t GetOsBit() const;

                    /**
                     * 设置生成包支持的操作系统位数
                     * @param _osBit 生成包支持的操作系统位数
                     * 
                     */
                    void SetOsBit(const int64_t& _osBit);

                    /**
                     * 判断参数 OsBit 是否已赋值
                     * @return OsBit 是否已赋值
                     * 
                     */
                    bool OsBitHasBeenSet() const;

                private:

                    /**
                     * 生成包支持的操作系统类型
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 生成包支持的操作系统位数
                     */
                    int64_t m_osBit;
                    bool m_osBitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEASSETSYSTEMSREQUEST_H_
