#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(tcm_public_header
  include/tencentcloud/tcm/v20210413/TcmClient.h
  )

set(tcm_public_header_model
  include/tencentcloud/tcm/v20210413/model/HorizontalPodAutoscalerSpec.h
  include/tencentcloud/tcm/v20210413/model/CustomPromConfig.h
  include/tencentcloud/tcm/v20210413/model/Service.h
  include/tencentcloud/tcm/v20210413/model/MeshConfig.h
  include/tencentcloud/tcm/v20210413/model/UnlinkPrometheusResponse.h
  include/tencentcloud/tcm/v20210413/model/LoadBalancerStatus.h
  include/tencentcloud/tcm/v20210413/model/ModifyTracingConfigResponse.h
  include/tencentcloud/tcm/v20210413/model/PodsMetricSource.h
  include/tencentcloud/tcm/v20210413/model/DescribeMeshResponse.h
  include/tencentcloud/tcm/v20210413/model/ModifyAccessLogConfigRequest.h
  include/tencentcloud/tcm/v20210413/model/AutoInjectionNamespaceState.h
  include/tencentcloud/tcm/v20210413/model/UnlinkClusterResponse.h
  include/tencentcloud/tcm/v20210413/model/LinkClusterListResponse.h
  include/tencentcloud/tcm/v20210413/model/ModifyAccessLogConfigResponse.h
  include/tencentcloud/tcm/v20210413/model/IngressGatewayStatus.h
  include/tencentcloud/tcm/v20210413/model/ResourceMetricSource.h
  include/tencentcloud/tcm/v20210413/model/CreateMeshResponse.h
  include/tencentcloud/tcm/v20210413/model/LinkClusterListRequest.h
  include/tencentcloud/tcm/v20210413/model/ClusterConfig.h
  include/tencentcloud/tcm/v20210413/model/UnlinkPrometheusRequest.h
  include/tencentcloud/tcm/v20210413/model/MetricSpec.h
  include/tencentcloud/tcm/v20210413/model/WorkloadConfig.h
  include/tencentcloud/tcm/v20210413/model/EgressGateway.h
  include/tencentcloud/tcm/v20210413/model/DescribeMeshRequest.h
  include/tencentcloud/tcm/v20210413/model/IstioConfig.h
  include/tencentcloud/tcm/v20210413/model/Mesh.h
  include/tencentcloud/tcm/v20210413/model/DescribeAccessLogConfigResponse.h
  include/tencentcloud/tcm/v20210413/model/LinkPrometheusRequest.h
  include/tencentcloud/tcm/v20210413/model/GrafanaInfo.h
  include/tencentcloud/tcm/v20210413/model/DeleteMeshResponse.h
  include/tencentcloud/tcm/v20210413/model/MeshStatus.h
  include/tencentcloud/tcm/v20210413/model/IstiodConfig.h
  include/tencentcloud/tcm/v20210413/model/InjectConfig.h
  include/tencentcloud/tcm/v20210413/model/DeleteMeshRequest.h
  include/tencentcloud/tcm/v20210413/model/LinkPrometheusResponse.h
  include/tencentcloud/tcm/v20210413/model/Resource.h
  include/tencentcloud/tcm/v20210413/model/DeployConfig.h
  include/tencentcloud/tcm/v20210413/model/DescribeAccessLogConfigRequest.h
  include/tencentcloud/tcm/v20210413/model/ActiveOperation.h
  include/tencentcloud/tcm/v20210413/model/CreateMeshRequest.h
  include/tencentcloud/tcm/v20210413/model/PrometheusStatus.h
  include/tencentcloud/tcm/v20210413/model/CrossRegionConfig.h
  include/tencentcloud/tcm/v20210413/model/Filter.h
  include/tencentcloud/tcm/v20210413/model/PrometheusConfig.h
  include/tencentcloud/tcm/v20210413/model/ExtensiveCluster.h
  include/tencentcloud/tcm/v20210413/model/SmartDNSConfig.h
  include/tencentcloud/tcm/v20210413/model/DescribeMeshListRequest.h
  include/tencentcloud/tcm/v20210413/model/ModifyMeshResponse.h
  include/tencentcloud/tcm/v20210413/model/UnlinkClusterRequest.h
  include/tencentcloud/tcm/v20210413/model/CLS.h
  include/tencentcloud/tcm/v20210413/model/TracingConfig.h
  include/tencentcloud/tcm/v20210413/model/IngressGateway.h
  include/tencentcloud/tcm/v20210413/model/EgressGatewayStatus.h
  include/tencentcloud/tcm/v20210413/model/ExtensiveClusters.h
  include/tencentcloud/tcm/v20210413/model/SelectedItems.h
  include/tencentcloud/tcm/v20210413/model/ModifyTracingConfigRequest.h
  include/tencentcloud/tcm/v20210413/model/ModifyMeshRequest.h
  include/tencentcloud/tcm/v20210413/model/Cluster.h
  include/tencentcloud/tcm/v20210413/model/Tag.h
  include/tencentcloud/tcm/v20210413/model/DescribeMeshListResponse.h
  include/tencentcloud/tcm/v20210413/model/TracingZipkin.h
  include/tencentcloud/tcm/v20210413/model/APM.h
  include/tencentcloud/tcm/v20210413/model/ResourceRequirements.h
  include/tencentcloud/tcm/v20210413/model/ClusterStatus.h
  include/tencentcloud/tcm/v20210413/model/SelectedRange.h
  include/tencentcloud/tcm/v20210413/model/AccessLogConfig.h
  include/tencentcloud/tcm/v20210413/model/LoadBalancer.h
  )

set(tcm_src
  src/v20210413/TcmClient.cpp
  src/v20210413/model/HorizontalPodAutoscalerSpec.cpp
  src/v20210413/model/CustomPromConfig.cpp
  src/v20210413/model/Service.cpp
  src/v20210413/model/MeshConfig.cpp
  src/v20210413/model/UnlinkPrometheusResponse.cpp
  src/v20210413/model/LoadBalancerStatus.cpp
  src/v20210413/model/ModifyTracingConfigResponse.cpp
  src/v20210413/model/PodsMetricSource.cpp
  src/v20210413/model/DescribeMeshResponse.cpp
  src/v20210413/model/ModifyAccessLogConfigRequest.cpp
  src/v20210413/model/AutoInjectionNamespaceState.cpp
  src/v20210413/model/UnlinkClusterResponse.cpp
  src/v20210413/model/LinkClusterListResponse.cpp
  src/v20210413/model/ModifyAccessLogConfigResponse.cpp
  src/v20210413/model/IngressGatewayStatus.cpp
  src/v20210413/model/ResourceMetricSource.cpp
  src/v20210413/model/CreateMeshResponse.cpp
  src/v20210413/model/LinkClusterListRequest.cpp
  src/v20210413/model/ClusterConfig.cpp
  src/v20210413/model/UnlinkPrometheusRequest.cpp
  src/v20210413/model/MetricSpec.cpp
  src/v20210413/model/WorkloadConfig.cpp
  src/v20210413/model/EgressGateway.cpp
  src/v20210413/model/DescribeMeshRequest.cpp
  src/v20210413/model/IstioConfig.cpp
  src/v20210413/model/Mesh.cpp
  src/v20210413/model/DescribeAccessLogConfigResponse.cpp
  src/v20210413/model/LinkPrometheusRequest.cpp
  src/v20210413/model/GrafanaInfo.cpp
  src/v20210413/model/DeleteMeshResponse.cpp
  src/v20210413/model/MeshStatus.cpp
  src/v20210413/model/IstiodConfig.cpp
  src/v20210413/model/InjectConfig.cpp
  src/v20210413/model/DeleteMeshRequest.cpp
  src/v20210413/model/LinkPrometheusResponse.cpp
  src/v20210413/model/Resource.cpp
  src/v20210413/model/DeployConfig.cpp
  src/v20210413/model/DescribeAccessLogConfigRequest.cpp
  src/v20210413/model/ActiveOperation.cpp
  src/v20210413/model/CreateMeshRequest.cpp
  src/v20210413/model/PrometheusStatus.cpp
  src/v20210413/model/CrossRegionConfig.cpp
  src/v20210413/model/Filter.cpp
  src/v20210413/model/PrometheusConfig.cpp
  src/v20210413/model/ExtensiveCluster.cpp
  src/v20210413/model/SmartDNSConfig.cpp
  src/v20210413/model/DescribeMeshListRequest.cpp
  src/v20210413/model/ModifyMeshResponse.cpp
  src/v20210413/model/UnlinkClusterRequest.cpp
  src/v20210413/model/CLS.cpp
  src/v20210413/model/TracingConfig.cpp
  src/v20210413/model/IngressGateway.cpp
  src/v20210413/model/EgressGatewayStatus.cpp
  src/v20210413/model/ExtensiveClusters.cpp
  src/v20210413/model/SelectedItems.cpp
  src/v20210413/model/ModifyTracingConfigRequest.cpp
  src/v20210413/model/ModifyMeshRequest.cpp
  src/v20210413/model/Cluster.cpp
  src/v20210413/model/Tag.cpp
  src/v20210413/model/DescribeMeshListResponse.cpp
  src/v20210413/model/TracingZipkin.cpp
  src/v20210413/model/APM.cpp
  src/v20210413/model/ResourceRequirements.cpp
  src/v20210413/model/ClusterStatus.cpp
  src/v20210413/model/SelectedRange.cpp
  src/v20210413/model/AccessLogConfig.cpp
  src/v20210413/model/LoadBalancer.cpp
  )

set(tcm_include
    include/tencentcloud/tcm
  )

add_library(tcm ${LIB_TYPE}
  ${tcm_public_header}
  ${tcm_public_header_model}
  ${tcm_src})

set_target_properties(tcm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcm
  )

target_include_directories(tcm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcm
  core)

#install(FILES ${tcm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcm/v20210413)
#install(FILES ${tcm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcm/v20210413/model)
install(DIRECTORY ${tcm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
