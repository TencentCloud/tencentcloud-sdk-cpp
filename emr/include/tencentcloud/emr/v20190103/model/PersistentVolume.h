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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CBSVolume.h>
#include <tencentcloud/emr/v20190103/model/CFSVolume.h>
#include <tencentcloud/emr/v20190103/model/COSVolume.h>
#include <tencentcloud/emr/v20190103/model/VolumeMount.h>
#include <tencentcloud/emr/v20190103/model/StorageVolumeDetail.h>
#include <tencentcloud/emr/v20190103/model/CFSTurboVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 卷目录
                */
                class PersistentVolume : public AbstractModel
                {
                public:
                    PersistentVolume();
                    ~PersistentVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cbs 存储卷</p>
                     * @return CBSVolumes <p>cbs 存储卷</p>
                     * 
                     */
                    std::vector<CBSVolume> GetCBSVolumes() const;

                    /**
                     * 设置<p>cbs 存储卷</p>
                     * @param _cBSVolumes <p>cbs 存储卷</p>
                     * 
                     */
                    void SetCBSVolumes(const std::vector<CBSVolume>& _cBSVolumes);

                    /**
                     * 判断参数 CBSVolumes 是否已赋值
                     * @return CBSVolumes 是否已赋值
                     * 
                     */
                    bool CBSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>cfs存储卷</p>
                     * @return CFSVolumes <p>cfs存储卷</p>
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>cfs存储卷</p>
                     * @param _cFSVolumes <p>cfs存储卷</p>
                     * 
                     */
                    void SetCFSVolumes(const std::vector<CFSVolume>& _cFSVolumes);

                    /**
                     * 判断参数 CFSVolumes 是否已赋值
                     * @return CFSVolumes 是否已赋值
                     * 
                     */
                    bool CFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>cos 存储卷</p>
                     * @return COSVolumes <p>cos 存储卷</p>
                     * 
                     */
                    std::vector<COSVolume> GetCOSVolumes() const;

                    /**
                     * 设置<p>cos 存储卷</p>
                     * @param _cOSVolumes <p>cos 存储卷</p>
                     * 
                     */
                    void SetCOSVolumes(const std::vector<COSVolume>& _cOSVolumes);

                    /**
                     * 判断参数 COSVolumes 是否已赋值
                     * @return COSVolumes 是否已赋值
                     * 
                     */
                    bool COSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>存储卷名称（yaml 提交的没有存储卷的类型）</p>
                     * @return StorageVolumeName <p>存储卷名称（yaml 提交的没有存储卷的类型）</p>
                     * 
                     */
                    std::vector<std::string> GetStorageVolumeName() const;

                    /**
                     * 设置<p>存储卷名称（yaml 提交的没有存储卷的类型）</p>
                     * @param _storageVolumeName <p>存储卷名称（yaml 提交的没有存储卷的类型）</p>
                     * 
                     */
                    void SetStorageVolumeName(const std::vector<std::string>& _storageVolumeName);

                    /**
                     * 判断参数 StorageVolumeName 是否已赋值
                     * @return StorageVolumeName 是否已赋值
                     * 
                     */
                    bool StorageVolumeNameHasBeenSet() const;

                    /**
                     * 获取<p>存储卷列表</p>
                     * @return VolumeMounts <p>存储卷列表</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>存储卷列表</p>
                     * @param _volumeMounts <p>存储卷列表</p>
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>存储卷详情</p>
                     * @return StorageVolumeDetail <p>存储卷详情</p>
                     * 
                     */
                    std::vector<StorageVolumeDetail> GetStorageVolumeDetail() const;

                    /**
                     * 设置<p>存储卷详情</p>
                     * @param _storageVolumeDetail <p>存储卷详情</p>
                     * 
                     */
                    void SetStorageVolumeDetail(const std::vector<StorageVolumeDetail>& _storageVolumeDetail);

                    /**
                     * 判断参数 StorageVolumeDetail 是否已赋值
                     * @return StorageVolumeDetail 是否已赋值
                     * 
                     */
                    bool StorageVolumeDetailHasBeenSet() const;

                    /**
                     * 获取<p>cfs trubo存储卷</p>
                     * @return CFSTurboVolumes <p>cfs trubo存储卷</p>
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>cfs trubo存储卷</p>
                     * @param _cFSTurboVolumes <p>cfs trubo存储卷</p>
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                private:

                    /**
                     * <p>cbs 存储卷</p>
                     */
                    std::vector<CBSVolume> m_cBSVolumes;
                    bool m_cBSVolumesHasBeenSet;

                    /**
                     * <p>cfs存储卷</p>
                     */
                    std::vector<CFSVolume> m_cFSVolumes;
                    bool m_cFSVolumesHasBeenSet;

                    /**
                     * <p>cos 存储卷</p>
                     */
                    std::vector<COSVolume> m_cOSVolumes;
                    bool m_cOSVolumesHasBeenSet;

                    /**
                     * <p>存储卷名称（yaml 提交的没有存储卷的类型）</p>
                     */
                    std::vector<std::string> m_storageVolumeName;
                    bool m_storageVolumeNameHasBeenSet;

                    /**
                     * <p>存储卷列表</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>存储卷详情</p>
                     */
                    std::vector<StorageVolumeDetail> m_storageVolumeDetail;
                    bool m_storageVolumeDetailHasBeenSet;

                    /**
                     * <p>cfs trubo存储卷</p>
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUME_H_
