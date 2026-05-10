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
                     * 获取<p>存储类型</p>
                     * @return Type <p>存储类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>存储类型</p>
                     * @param _type <p>存储类型</p>
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
                     * 获取<p>对象存储桶名称</p>
                     * @return BucketName <p>对象存储桶名称</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>对象存储桶名称</p>
                     * @param _bucketName <p>对象存储桶名称</p>
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
                     * 获取<p>存储连接地址</p>
                     * @return Endpoint <p>存储连接地址</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>存储连接地址</p>
                     * @param _endpoint <p>存储连接地址</p>
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
                     * 获取<p>存储连接用户密码</p>
                     * @return KeyID <p>存储连接用户密码</p>
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 设置<p>存储连接用户密码</p>
                     * @param _keyID <p>存储连接用户密码</p>
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
                     * 获取<p>存储挂载目的目录</p>
                     * @return DstPath <p>存储挂载目的目录</p>
                     * 
                     */
                    std::string GetDstPath() const;

                    /**
                     * 设置<p>存储挂载目的目录</p>
                     * @param _dstPath <p>存储挂载目的目录</p>
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
                     * 获取<p>存储挂载源目录</p>
                     * @return SrcPath <p>存储挂载源目录</p>
                     * 
                     */
                    std::string GetSrcPath() const;

                    /**
                     * 设置<p>存储挂载源目录</p>
                     * @param _srcPath <p>存储挂载源目录</p>
                     * 
                     */
                    void SetSrcPath(const std::string& _srcPath);

                    /**
                     * 判断参数 SrcPath 是否已赋值
                     * @return SrcPath 是否已赋值
                     * 
                     */
                    bool SrcPathHasBeenSet() const;

                    /**
                     * 获取<p>cfs 实例ip</p>
                     * @return MountIP <p>cfs 实例ip</p>
                     * 
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置<p>cfs 实例ip</p>
                     * @param _mountIP <p>cfs 实例ip</p>
                     * 
                     */
                    void SetMountIP(const std::string& _mountIP);

                    /**
                     * 判断参数 MountIP 是否已赋值
                     * @return MountIP 是否已赋值
                     * 
                     */
                    bool MountIPHasBeenSet() const;

                    /**
                     * 获取<p>默认读写</p>
                     * @return ReadOnly <p>默认读写</p>
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置<p>默认读写</p>
                     * @param _readOnly <p>默认读写</p>
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取<p>CFS 实例 ID</p>
                     * @return InstanceId <p>CFS 实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>CFS 实例 ID</p>
                     * @param _instanceId <p>CFS 实例 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>存储类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>对象存储桶名称</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>存储连接地址</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>存储连接用户密码</p>
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                    /**
                     * <p>存储挂载目的目录</p>
                     */
                    std::string m_dstPath;
                    bool m_dstPathHasBeenSet;

                    /**
                     * <p>存储挂载源目录</p>
                     */
                    std::string m_srcPath;
                    bool m_srcPathHasBeenSet;

                    /**
                     * <p>cfs 实例ip</p>
                     */
                    std::string m_mountIP;
                    bool m_mountIPHasBeenSet;

                    /**
                     * <p>默认读写</p>
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>CFS 实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_VOLUMECONF_H_
