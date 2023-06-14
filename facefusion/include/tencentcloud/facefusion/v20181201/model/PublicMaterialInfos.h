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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_PUBLICMATERIALINFOS_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_PUBLICMATERIALINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/MaterialFaceList.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * 素材信息
                */
                class PublicMaterialInfos : public AbstractModel
                {
                public:
                    PublicMaterialInfos();
                    ~PublicMaterialInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材Id
                     * @return MaterialId 素材Id
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置素材Id
                     * @param _materialId 素材Id
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取素材状态
                     * @return MaterialStatus 素材状态
                     * 
                     */
                    int64_t GetMaterialStatus() const;

                    /**
                     * 设置素材状态
                     * @param _materialStatus 素材状态
                     * 
                     */
                    void SetMaterialStatus(const int64_t& _materialStatus);

                    /**
                     * 判断参数 MaterialStatus 是否已赋值
                     * @return MaterialStatus 是否已赋值
                     * 
                     */
                    bool MaterialStatusHasBeenSet() const;

                    /**
                     * 获取脸型参数P图
                     * @return BlendParamPtu 脸型参数P图
                     * 
                     */
                    int64_t GetBlendParamPtu() const;

                    /**
                     * 设置脸型参数P图
                     * @param _blendParamPtu 脸型参数P图
                     * 
                     */
                    void SetBlendParamPtu(const int64_t& _blendParamPtu);

                    /**
                     * 判断参数 BlendParamPtu 是否已赋值
                     * @return BlendParamPtu 是否已赋值
                     * 
                     */
                    bool BlendParamPtuHasBeenSet() const;

                    /**
                     * 获取五官参数P图
                     * @return PositionParamPtu 五官参数P图
                     * 
                     */
                    int64_t GetPositionParamPtu() const;

                    /**
                     * 设置五官参数P图
                     * @param _positionParamPtu 五官参数P图
                     * 
                     */
                    void SetPositionParamPtu(const int64_t& _positionParamPtu);

                    /**
                     * 判断参数 PositionParamPtu 是否已赋值
                     * @return PositionParamPtu 是否已赋值
                     * 
                     */
                    bool PositionParamPtuHasBeenSet() const;

                    /**
                     * 获取脸型参数优图
                     * @return BlendParamYoutu 脸型参数优图
                     * 
                     */
                    int64_t GetBlendParamYoutu() const;

                    /**
                     * 设置脸型参数优图
                     * @param _blendParamYoutu 脸型参数优图
                     * 
                     */
                    void SetBlendParamYoutu(const int64_t& _blendParamYoutu);

                    /**
                     * 判断参数 BlendParamYoutu 是否已赋值
                     * @return BlendParamYoutu 是否已赋值
                     * 
                     */
                    bool BlendParamYoutuHasBeenSet() const;

                    /**
                     * 获取五官参数优图
                     * @return PositionParamYoutu 五官参数优图
                     * 
                     */
                    int64_t GetPositionParamYoutu() const;

                    /**
                     * 设置五官参数优图
                     * @param _positionParamYoutu 五官参数优图
                     * 
                     */
                    void SetPositionParamYoutu(const int64_t& _positionParamYoutu);

                    /**
                     * 判断参数 PositionParamYoutu 是否已赋值
                     * @return PositionParamYoutu 是否已赋值
                     * 
                     */
                    bool PositionParamYoutuHasBeenSet() const;

                    /**
                     * 获取素材COS地址
                     * @return Url 素材COS地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置素材COS地址
                     * @param _url 素材COS地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取人脸信息
                     * @return MaterialFaceList 人脸信息
                     * 
                     */
                    std::vector<MaterialFaceList> GetMaterialFaceList() const;

                    /**
                     * 设置人脸信息
                     * @param _materialFaceList 人脸信息
                     * 
                     */
                    void SetMaterialFaceList(const std::vector<MaterialFaceList>& _materialFaceList);

                    /**
                     * 判断参数 MaterialFaceList 是否已赋值
                     * @return MaterialFaceList 是否已赋值
                     * 
                     */
                    bool MaterialFaceListHasBeenSet() const;

                private:

                    /**
                     * 素材Id
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 素材状态
                     */
                    int64_t m_materialStatus;
                    bool m_materialStatusHasBeenSet;

                    /**
                     * 脸型参数P图
                     */
                    int64_t m_blendParamPtu;
                    bool m_blendParamPtuHasBeenSet;

                    /**
                     * 五官参数P图
                     */
                    int64_t m_positionParamPtu;
                    bool m_positionParamPtuHasBeenSet;

                    /**
                     * 脸型参数优图
                     */
                    int64_t m_blendParamYoutu;
                    bool m_blendParamYoutuHasBeenSet;

                    /**
                     * 五官参数优图
                     */
                    int64_t m_positionParamYoutu;
                    bool m_positionParamYoutuHasBeenSet;

                    /**
                     * 素材COS地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 人脸信息
                     */
                    std::vector<MaterialFaceList> m_materialFaceList;
                    bool m_materialFaceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_PUBLICMATERIALINFOS_H_
