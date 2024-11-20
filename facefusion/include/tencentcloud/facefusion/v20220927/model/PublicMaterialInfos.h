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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_PUBLICMATERIALINFOS_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_PUBLICMATERIALINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/MaterialFaces.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
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

字段取值: 
0   审核中
1   人工审核通过
2   人工审核失败
3   申诉中
11  申诉成功
12  申诉失败
21  机器审核通过
22  机器审核失败
31  视频素材预处理成功，素材可用
32  视频素材预处理失败
33  角色不在视频中
                     * @return MaterialStatus 素材状态

字段取值: 
0   审核中
1   人工审核通过
2   人工审核失败
3   申诉中
11  申诉成功
12  申诉失败
21  机器审核通过
22  机器审核失败
31  视频素材预处理成功，素材可用
32  视频素材预处理失败
33  角色不在视频中
                     * 
                     */
                    int64_t GetMaterialStatus() const;

                    /**
                     * 设置素材状态

字段取值: 
0   审核中
1   人工审核通过
2   人工审核失败
3   申诉中
11  申诉成功
12  申诉失败
21  机器审核通过
22  机器审核失败
31  视频素材预处理成功，素材可用
32  视频素材预处理失败
33  角色不在视频中
                     * @param _materialStatus 素材状态

字段取值: 
0   审核中
1   人工审核通过
2   人工审核失败
3   申诉中
11  申诉成功
12  申诉失败
21  机器审核通过
22  机器审核失败
31  视频素材预处理成功，素材可用
32  视频素材预处理失败
33  角色不在视频中
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
                    std::vector<MaterialFaces> GetMaterialFaceList() const;

                    /**
                     * 设置人脸信息
                     * @param _materialFaceList 人脸信息
                     * 
                     */
                    void SetMaterialFaceList(const std::vector<MaterialFaces>& _materialFaceList);

                    /**
                     * 判断参数 MaterialFaceList 是否已赋值
                     * @return MaterialFaceList 是否已赋值
                     * 
                     */
                    bool MaterialFaceListHasBeenSet() const;

                    /**
                     * 获取素材名
                     * @return MaterialName 素材名
                     * 
                     */
                    std::string GetMaterialName() const;

                    /**
                     * 设置素材名
                     * @param _materialName 素材名
                     * 
                     */
                    void SetMaterialName(const std::string& _materialName);

                    /**
                     * 判断参数 MaterialName 是否已赋值
                     * @return MaterialName 是否已赋值
                     * 
                     */
                    bool MaterialNameHasBeenSet() const;

                    /**
                     * 获取审核原因
                     * @return AuditResult 审核原因
                     * 
                     */
                    std::string GetAuditResult() const;

                    /**
                     * 设置审核原因
                     * @param _auditResult 审核原因
                     * 
                     */
                    void SetAuditResult(const std::string& _auditResult);

                    /**
                     * 判断参数 AuditResult 是否已赋值
                     * @return AuditResult 是否已赋值
                     * 
                     */
                    bool AuditResultHasBeenSet() const;

                private:

                    /**
                     * 素材Id
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 素材状态

字段取值: 
0   审核中
1   人工审核通过
2   人工审核失败
3   申诉中
11  申诉成功
12  申诉失败
21  机器审核通过
22  机器审核失败
31  视频素材预处理成功，素材可用
32  视频素材预处理失败
33  角色不在视频中
                     */
                    int64_t m_materialStatus;
                    bool m_materialStatusHasBeenSet;

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
                    std::vector<MaterialFaces> m_materialFaceList;
                    bool m_materialFaceListHasBeenSet;

                    /**
                     * 素材名
                     */
                    std::string m_materialName;
                    bool m_materialNameHasBeenSet;

                    /**
                     * 审核原因
                     */
                    std::string m_auditResult;
                    bool m_auditResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_PUBLICMATERIALINFOS_H_
