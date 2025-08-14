/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_VOLUMECONF_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_VOLUMECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 存储配置
                */
                class VolumeConf : public AbstractModel
                {
                public:
                    VolumeConf();
                    ~VolumeConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型
                     * @return Type 存储类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置存储类型
                     * @param _type 存储类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取对象存储桶名称
                     * @return BucketName 对象存储桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置对象存储桶名称
                     * @param _bucketName 对象存储桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取存储连接地址
                     * @return Endpoint 存储连接地址
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置存储连接地址
                     * @param _endpoint 存储连接地址
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取存储连接用户密码
                     * @return KeyID 存储连接用户密码
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 设置存储连接用户密码
                     * @param _keyID 存储连接用户密码
                     * 
                     */
                    void SetKeyID(const std::string& _keyID);

                    /**
                     * 判断参数 KeyID 是否已赋值
                     * @return KeyID 是否已赋值
                     * 
                     */
                    bool KeyIDHasBeenSet() const;

                    /**
                     * 获取存储挂载目的目录
                     * @return DstPath 存储挂载目的目录
                     * 
                     */
                    std::string GetDstPath() const;

                    /**
                     * 设置存储挂载目的目录
                     * @param _dstPath 存储挂载目的目录
                     * 
                     */
                    void SetDstPath(const std::string& _dstPath);

                    /**
                     * 判断参数 DstPath 是否已赋值
                     * @return DstPath 是否已赋值
                     * 
                     */
                    bool DstPathHasBeenSet() const;

                    /**
                     * 获取存储挂载源目录
                     * @return SrcPath 存储挂载源目录
                     * 
                     */
                    std::string GetSrcPath() const;

                    /**
                     * 设置存储挂载源目录
                     * @param _srcPath 存储挂载源目录
                     * 
                     */
                    void SetSrcPath(const std::string& _srcPath);

                    /**
                     * 判断参数 SrcPath 是否已赋值
                     * @return SrcPath 是否已赋值
                     * 
                     */
                    bool SrcPathHasBeenSet() const;

                private:

                    /**
                     * 存储类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对象存储桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 存储连接地址
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 存储连接用户密码
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                    /**
                     * 存储挂载目的目录
                     */
                    std::string m_dstPath;
                    bool m_dstPathHasBeenSet;

                    /**
                     * 存储挂载源目录
                     */
                    std::string m_srcPath;
                    bool m_srcPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_VOLUMECONF_H_
