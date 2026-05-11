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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SCENESTORECOSPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SCENESTORECOSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 场景化视频结果文件上传COS时，需传入的信息。 需创建并授权LVB_QCSRole角色。
                */
                class SceneStoreCosParam : public AbstractModel
                {
                public:
                    SceneStoreCosParam();
                    ~SceneStoreCosParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cos桶名称。</p>
                     * @return CosBucketName <p>Cos桶名称。</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>Cos桶名称。</p>
                     * @param _cosBucketName <p>Cos桶名称。</p>
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取<p>Cos桶地域。</p>
                     * @return CosBucketRegion <p>Cos桶地域。</p>
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置<p>Cos桶地域。</p>
                     * @param _cosBucketRegion <p>Cos桶地域。</p>
                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取<p>存储路径。</p>
                     * @return CosBucketPath <p>存储路径。</p>
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置<p>存储路径。</p>
                     * @param _cosBucketPath <p>存储路径。</p>
                     * 
                     */
                    void SetCosBucketPath(const std::string& _cosBucketPath);

                    /**
                     * 判断参数 CosBucketPath 是否已赋值
                     * @return CosBucketPath 是否已赋值
                     * 
                     */
                    bool CosBucketPathHasBeenSet() const;

                private:

                    /**
                     * <p>Cos桶名称。</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>Cos桶地域。</p>
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * <p>存储路径。</p>
                     */
                    std::string m_cosBucketPath;
                    bool m_cosBucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SCENESTORECOSPARAM_H_
