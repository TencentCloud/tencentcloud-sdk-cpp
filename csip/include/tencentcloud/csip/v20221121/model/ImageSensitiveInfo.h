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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像敏感信息
                */
                class ImageSensitiveInfo : public AbstractModel
                {
                public:
                    ImageSensitiveInfo();
                    ~ImageSensitiveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>敏感信息行为类型</p><p>枚举值：</p><ul><li>1： 以root账号启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * @return Behavior <p>敏感信息行为类型</p><p>枚举值：</p><ul><li>1： 以root账号启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置<p>敏感信息行为类型</p><p>枚举值：</p><ul><li>1： 以root账号启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * @param _behavior <p>敏感信息行为类型</p><p>枚举值：</p><ul><li>1： 以root账号启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * 
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取<p>规则类型</p>
                     * @return Type <p>规则类型</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>规则类型</p>
                     * @param _type <p>规则类型</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>风险级别</p><p>枚举值：</p><ul><li>1： 低风险</li><li>2： 中分线</li><li>3： 高风险</li><li>4： 严重风险</li></ul>
                     * @return Level <p>风险级别</p><p>枚举值：</p><ul><li>1： 低风险</li><li>2： 中分线</li><li>3： 高风险</li><li>4： 严重风险</li></ul>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>风险级别</p><p>枚举值：</p><ul><li>1： 低风险</li><li>2： 中分线</li><li>3： 高风险</li><li>4： 严重风险</li></ul>
                     * @param _level <p>风险级别</p><p>枚举值：</p><ul><li>1： 低风险</li><li>2： 中分线</li><li>3： 高风险</li><li>4： 严重风险</li></ul>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>风险描述</p>
                     * @return Describe <p>风险描述</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>风险描述</p>
                     * @param _describe <p>风险描述</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>风险内容</p>
                     * @return InstructionContent <p>风险内容</p>
                     * 
                     */
                    std::string GetInstructionContent() const;

                    /**
                     * 设置<p>风险内容</p>
                     * @param _instructionContent <p>风险内容</p>
                     * 
                     */
                    void SetInstructionContent(const std::string& _instructionContent);

                    /**
                     * 判断参数 InstructionContent 是否已赋值
                     * @return InstructionContent 是否已赋值
                     * 
                     */
                    bool InstructionContentHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>所属账号名</p>
                     * @return OwnerAccountName <p>所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>所属账号名</p>
                     * @param _ownerAccountName <p>所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>所属账号uin</p>
                     * @return OwnerUin <p>所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>所属账号uin</p>
                     * @param _ownerUin <p>所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>所属账号appid</p>
                     * @return OwnerAppId <p>所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>所属账号appid</p>
                     * @param _ownerAppId <p>所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>影响镜像数</p>
                     * @return AffectImageCount <p>影响镜像数</p>
                     * 
                     */
                    uint64_t GetAffectImageCount() const;

                    /**
                     * 设置<p>影响镜像数</p>
                     * @param _affectImageCount <p>影响镜像数</p>
                     * 
                     */
                    void SetAffectImageCount(const uint64_t& _affectImageCount);

                    /**
                     * 判断参数 AffectImageCount 是否已赋值
                     * @return AffectImageCount 是否已赋值
                     * 
                     */
                    bool AffectImageCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像层Id</p>
                     * @return LayerId <p>镜像层Id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>镜像层Id</p>
                     * @param _layerId <p>镜像层Id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像Id</p>
                     * @return Id <p>镜像Id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>镜像Id</p>
                     * @param _id <p>镜像Id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>首次发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return FirstFoundTime <p>首次发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetFirstFoundTime() const;

                    /**
                     * 设置<p>首次发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _firstFoundTime <p>首次发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetFirstFoundTime(const std::string& _firstFoundTime);

                    /**
                     * 判断参数 FirstFoundTime 是否已赋值
                     * @return FirstFoundTime 是否已赋值
                     * 
                     */
                    bool FirstFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestFoundTime <p>最近发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置<p>最近发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestFoundTime <p>最近发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>镜像层序号</p>
                     * @return LayerIndex <p>镜像层序号</p>
                     * 
                     */
                    uint64_t GetLayerIndex() const;

                    /**
                     * 设置<p>镜像层序号</p>
                     * @param _layerIndex <p>镜像层序号</p>
                     * 
                     */
                    void SetLayerIndex(const uint64_t& _layerIndex);

                    /**
                     * 判断参数 LayerIndex 是否已赋值
                     * @return LayerIndex 是否已赋值
                     * 
                     */
                    bool LayerIndexHasBeenSet() const;

                private:

                    /**
                     * <p>敏感信息行为类型</p><p>枚举值：</p><ul><li>1： 以root账号启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>规则类型</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>风险级别</p><p>枚举值：</p><ul><li>1： 低风险</li><li>2： 中分线</li><li>3： 高风险</li><li>4： 严重风险</li></ul>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>风险描述</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>风险内容</p>
                     */
                    std::string m_instructionContent;
                    bool m_instructionContentHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>影响镜像数</p>
                     */
                    uint64_t m_affectImageCount;
                    bool m_affectImageCountHasBeenSet;

                    /**
                     * <p>镜像层Id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>镜像Id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>首次发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_firstFoundTime;
                    bool m_firstFoundTimeHasBeenSet;

                    /**
                     * <p>最近发现时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * <p>镜像层序号</p>
                     */
                    uint64_t m_layerIndex;
                    bool m_layerIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEINFO_H_
