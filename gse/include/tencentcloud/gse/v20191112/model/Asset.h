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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_ASSET_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_ASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 生成包信息
                */
                class Asset : public AbstractModel
                {
                public:
                    Asset();
                    ~Asset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成包ID
                     * @return AssetId 生成包ID
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置生成包ID
                     * @param AssetId 生成包ID
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取生成包名字，最小长度为1，最大长度为64
                     * @return AssetName 生成包名字，最小长度为1，最大长度为64
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置生成包名字，最小长度为1，最大长度为64
                     * @param AssetName 生成包名字，最小长度为1，最大长度为64
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取生成包版本，最小长度为1，最大长度为64
                     * @return AssetVersion 生成包版本，最小长度为1，最大长度为64
                     */
                    std::string GetAssetVersion() const;

                    /**
                     * 设置生成包版本，最小长度为1，最大长度为64
                     * @param AssetVersion 生成包版本，最小长度为1，最大长度为64
                     */
                    void SetAssetVersion(const std::string& _assetVersion);

                    /**
                     * 判断参数 AssetVersion 是否已赋值
                     * @return AssetVersion 是否已赋值
                     */
                    bool AssetVersionHasBeenSet() const;

                    /**
                     * 获取生成包可运行的操作系统，暂时只支持CentOS7.16
                     * @return OperateSystem 生成包可运行的操作系统，暂时只支持CentOS7.16
                     */
                    std::string GetOperateSystem() const;

                    /**
                     * 设置生成包可运行的操作系统，暂时只支持CentOS7.16
                     * @param OperateSystem 生成包可运行的操作系统，暂时只支持CentOS7.16
                     */
                    void SetOperateSystem(const std::string& _operateSystem);

                    /**
                     * 判断参数 OperateSystem 是否已赋值
                     * @return OperateSystem 是否已赋值
                     */
                    bool OperateSystemHasBeenSet() const;

                    /**
                     * 获取生成包状态，0代表上传中，1代表上传失败，2代表上传成功
                     * @return Stauts 生成包状态，0代表上传中，1代表上传失败，2代表上传成功
                     */
                    int64_t GetStauts() const;

                    /**
                     * 设置生成包状态，0代表上传中，1代表上传失败，2代表上传成功
                     * @param Stauts 生成包状态，0代表上传中，1代表上传失败，2代表上传成功
                     */
                    void SetStauts(const int64_t& _stauts);

                    /**
                     * 判断参数 Stauts 是否已赋值
                     * @return Stauts 是否已赋值
                     */
                    bool StautsHasBeenSet() const;

                    /**
                     * 获取生成包大小
                     * @return Size 生成包大小
                     */
                    std::string GetSize() const;

                    /**
                     * 设置生成包大小
                     * @param Size 生成包大小
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取生成包创建时间
                     * @return CreateTime 生成包创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置生成包创建时间
                     * @param CreateTime 生成包创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取生成包绑定的Fleet个数，最小值为0
                     * @return BindFleetNum 生成包绑定的Fleet个数，最小值为0
                     */
                    int64_t GetBindFleetNum() const;

                    /**
                     * 设置生成包绑定的Fleet个数，最小值为0
                     * @param BindFleetNum 生成包绑定的Fleet个数，最小值为0
                     */
                    void SetBindFleetNum(const int64_t& _bindFleetNum);

                    /**
                     * 判断参数 BindFleetNum 是否已赋值
                     * @return BindFleetNum 是否已赋值
                     */
                    bool BindFleetNumHasBeenSet() const;

                    /**
                     * 获取生成包的全局唯一资源标识符
                     * @return AssetArn 生成包的全局唯一资源标识符
                     */
                    std::string GetAssetArn() const;

                    /**
                     * 设置生成包的全局唯一资源标识符
                     * @param AssetArn 生成包的全局唯一资源标识符
                     */
                    void SetAssetArn(const std::string& _assetArn);

                    /**
                     * 判断参数 AssetArn 是否已赋值
                     * @return AssetArn 是否已赋值
                     */
                    bool AssetArnHasBeenSet() const;

                    /**
                     * 获取生成包支持的操作系统镜像id
                     * @return ImageId 生成包支持的操作系统镜像id
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置生成包支持的操作系统镜像id
                     * @param ImageId 生成包支持的操作系统镜像id
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取生成包支持的操作系统类型
                     * @return OsType 生成包支持的操作系统类型
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置生成包支持的操作系统类型
                     * @param OsType 生成包支持的操作系统类型
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 生成包ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 生成包名字，最小长度为1，最大长度为64
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 生成包版本，最小长度为1，最大长度为64
                     */
                    std::string m_assetVersion;
                    bool m_assetVersionHasBeenSet;

                    /**
                     * 生成包可运行的操作系统，暂时只支持CentOS7.16
                     */
                    std::string m_operateSystem;
                    bool m_operateSystemHasBeenSet;

                    /**
                     * 生成包状态，0代表上传中，1代表上传失败，2代表上传成功
                     */
                    int64_t m_stauts;
                    bool m_stautsHasBeenSet;

                    /**
                     * 生成包大小
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 生成包创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 生成包绑定的Fleet个数，最小值为0
                     */
                    int64_t m_bindFleetNum;
                    bool m_bindFleetNumHasBeenSet;

                    /**
                     * 生成包的全局唯一资源标识符
                     */
                    std::string m_assetArn;
                    bool m_assetArnHasBeenSet;

                    /**
                     * 生成包支持的操作系统镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 生成包支持的操作系统类型
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_ASSET_H_
